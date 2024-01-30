@class WLSourceDevice, NSString, NSArray, NSObject;
@protocol WLDeviceDiscoverySocketHandlerDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface WLDeviceDiscoverySocketHandler : WLSocketHandler {
    NSString *_srpPassword;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_queue> *_writeQueue;
    WLSourceDevice *_sourceDevice;
    NSArray *_priorConnectionFailureReasons;
}

@property (readonly, nonatomic) int sockfd;
@property (weak, nonatomic) id<WLDeviceDiscoverySocketHandlerDelegate> delegate;

- (void)close;
- (void).cxx_destruct;
- (void)invalidateWithError:(id)a0;
- (void)resume;
- (void)suspend;
- (void)sendData:(id)a0 completion:(id /* block */)a1;
- (id)_commandStringWithData:(id)a0;
- (void)_performSRPAuthenticationAndHandshake;
- (BOOL)_didReceiveHandshakeData:(id)a0;
- (id)_handshakeResponseData;
- (id)initWithSocket:(int)a0 srpPassword:(id)a1 delegate:(id)a2;
- (id)_okResponseData;
- (id)_handshakeCommandData;

@end
