@class NSError;
@protocol NSXPCProxyCreating;

@interface _SFCredentialStore : NSObject {
    id _credentialStoreInternal;
    id<NSXPCProxyCreating> _serverConnection;
    NSError *_serverError;
}

+ (id)defaultCredentialStore;
+ (id)_serverConnectionWithError:(id *)a0;

- (void).cxx_destruct;
- (id)_init;
- (void)fetchPasswordCredentialForPersistentIdentifier:(id)a0 withResultHandler:(id /* block */)a1;
- (id)serverProxyWithResultHandler:(id /* block */)a0;
- (id)serverProxyWithDualResultHandler:(id /* block */)a0;
- (id)serverProxyWithBooleanHandler:(id /* block */)a0;
- (void)addCredential:(id)a0 withAccessPolicy:(id)a1 resultHandler:(id /* block */)a2;
- (void)lookupCredentialsForServiceIdentifiers:(id)a0 withResultHandler:(id /* block */)a1;
- (void)removeCredentialWithPersistentIdentifier:(id)a0 withResultHandler:(id /* block */)a1;
- (void)replaceOldCredential:(id)a0 withNewCredential:(id)a1 resultHandler:(id /* block */)a2;
- (void)replaceCredential:(id)a0 withNewCredential:(id)a1 resultHandler:(id /* block */)a2;

@end
