@class AVConferenceXPCClient;
@protocol AVCVirtualTTYDeviceDelegate;

@interface AVCVirtualTTYDevice : NSObject {
    AVConferenceXPCClient *_connection;
    id _delegate;
    BOOL _isStarted;
}

@property (nonatomic) id<AVCVirtualTTYDeviceDelegate> delegate;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithStreamToken:(long long)a0 error:(id *)a1;
- (id)initWithMode:(long long)a0 error:(id *)a1;
- (BOOL)sendText:(id)a0;
- (id)sendCharacter:(unsigned short)a0;
- (void)registerBlocksForDelegateNotifications;
- (void)deregisterBlocksForDelegateNotifications;
- (void)terminateSession;
- (id)initWithMode:(long long)a0 error:(id *)a1 streamToken:(long long)a2;

@end
