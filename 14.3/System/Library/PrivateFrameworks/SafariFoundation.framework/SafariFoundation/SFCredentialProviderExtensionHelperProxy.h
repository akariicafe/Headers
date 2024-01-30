@class NSXPCConnection;

@interface SFCredentialProviderExtensionHelperProxy : NSObject <SFCredentialProviderExtensionHelperProtocol> {
    NSXPCConnection *_connection;
}

- (id)_proxyObject;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchCredentialIdentitiesMatchingDomains:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void)getCredentialProviderExtensionStateWithCompletion:(id /* block */)a0;
- (void)saveCredentialIdentities:(id)a0 completion:(id /* block */)a1;
- (void)removeCredentialIdentities:(id)a0 completion:(id /* block */)a1;
- (void)removeAllCredentialIdentitiesWithCompletion:(id /* block */)a0;
- (void)replaceCredentialIdentitiesWithIdentities:(id)a0 completion:(id /* block */)a1;
- (void)removeCredentialIdentityStoreForApplication:(id)a0 completion:(id /* block */)a1;

@end
