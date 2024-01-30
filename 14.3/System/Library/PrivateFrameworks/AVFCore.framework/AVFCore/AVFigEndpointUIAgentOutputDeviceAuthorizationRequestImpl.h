@class AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl, NSString, AVOutputDevice;

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl : NSObject <AVOutputDeviceAuthorizationRequestImpl> {
    id /* block */ _completionHandler;
}

@property (weak) AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *parentAuthorizationSessionImpl;
@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) AVOutputDevice *outputDevice;
@property (readonly, nonatomic) NSString *authorizationTokenType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)respondWithAuthorizationToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)enterTerminalStatus:(long long)a0 error:(id)a1;
- (id)initWithID:(id)a0 outputDevice:(id)a1 authorizationTokenType:(id)a2;

@end
