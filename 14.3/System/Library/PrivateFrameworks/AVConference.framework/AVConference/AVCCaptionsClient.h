@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue, AVCCaptionsClientDelegate;

@interface AVCCaptionsClient : NSObject {
    id _delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) id<AVCCaptionsClientDelegate> delegate;
@property (readonly) BOOL captionsSupported;
@property (readonly) BOOL captionsEnabled;
@property (readonly) long long streamToken;

- (BOOL)connect;
- (void)disconnect;
- (void)dealloc;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (id)initWithDelegate:(id)a0 streamToken:(long long)a1;
- (void)enableCaptions:(BOOL)a0;
- (void)configureCaptions:(id)a0;

@end
