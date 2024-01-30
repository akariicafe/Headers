@class NSString, WLSourceDevice, NSObject;
@protocol WLDeviceDiscoverySocketHandlerDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface WLDeviceDiscoverySocketHandler : WLSocketHandler {
    NSString *_srpPassword;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_queue> *_writeQueue;
    WLSourceDevice *_sourceDevice;
}

@property (readonly, nonatomic) int sockfd;
@property (weak, nonatomic) id<WLDeviceDiscoverySocketHandlerDelegate> delegate;

- (void)invalidateWithError:(id)a0;
- (void)suspend;
- (void)close;
- (void).cxx_destruct;
- (void)resume;
- (void)sendData:(id)a0 completion:(id /* block */)a1;
- (id)_okResponseData;
- (id)_commandStringWithData:(id)a0;
- (BOOL)_didReceiveHandshakeData:(id)a0;
- (id)_handshakeCommandData;
- (id)_handshakeResponseData;
- (void)_performSRPAuthenticationAndHandshake;
- (id)initWithSocket:(int)a0 srpPassword:(id)a1 delegate:(id)a2;

@end
