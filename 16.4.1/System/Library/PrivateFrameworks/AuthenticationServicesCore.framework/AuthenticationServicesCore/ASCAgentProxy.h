@class NSString, NSObject, NSXPCConnection;
@protocol OS_os_activity;

@interface ASCAgentProxy : NSObject <ASCAgentProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_os_activity> *_activity;
    id /* block */ _failureHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void)_setUpConnection:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)cancelCurrentRequest;
- (void)reconnectIfNecessary;
- (void)performAuthorizationRequestsForContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)performSilentAuthorizationRequestsForContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(id /* block */)a0;
- (void)getArePasskeysDisallowedForRelyingParty:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getCanCurrentProcessAccessPasskeysForRelyingParty:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)a0;
- (id)initWithFailureHandler:(id /* block */)a0;
- (void)openCABLEURL:(id)a0 fromSourceApplication:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
