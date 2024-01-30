@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue, AVCCaptionsClientDelegate;

@interface AVCCaptionsClient : NSObject {
    id _delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (class, readonly, nonatomic) BOOL isCaptioningSupported;

@property (readonly) id<AVCCaptionsClientDelegate> delegate;
@property (readonly) BOOL captionsSupported;
@property (readonly) BOOL captionsEnabled;
@property (readonly) long long streamToken;

- (BOOL)connect;
- (void)disconnect;
- (void)dealloc;
- (void)enableCaptions:(BOOL)a0;
- (void)configureCaptions:(id)a0;
- (id)initWithDelegate:(id)a0 streamToken:(long long)a1;
- (id)captionsResultsWithInternalResults:(id)a0;
- (void)deregisterBlocksForNotifications;
- (void)didDisableCaptions:(BOOL)a0 error:(id)a1;
- (void)didEnableCaptions:(BOOL)a0 error:(id)a1;
- (void)didStartCaptioningWithReason:(unsigned char)a0;
- (void)didStopCaptioningWithReason:(unsigned char)a0;
- (void)didUpdateCaptions:(id)a0 isRemote:(BOOL)a1;
- (void)registerBlocksForNotifications;

@end
