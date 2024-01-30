@class NSString, NSXPCConnection;

@interface ASCAgentProxy : NSObject <ASCAgentProtocol> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_proxy;
- (void)reconnectIfNecessary;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)performAuthorizationRequestsForContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(id /* block */)a0;
- (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)a0;
- (void)_setUpConnection:(id)a0;

@end
