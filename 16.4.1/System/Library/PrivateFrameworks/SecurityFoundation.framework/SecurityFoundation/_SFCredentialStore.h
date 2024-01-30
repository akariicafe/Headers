@class NSError;
@protocol NSXPCProxyCreating;

@interface _SFCredentialStore : NSObject {
    id _credentialStoreInternal;
    id<NSXPCProxyCreating> _serverConnection;
    NSError *_serverError;
}

+ (id)_serverConnectionWithError:(id *)a0;
+ (id)defaultCredentialStore;

- (id)_init;
- (void).cxx_destruct;
- (void)addCredential:(id)a0 withAccessPolicy:(id)a1 resultHandler:(id /* block */)a2;
- (void)fetchPasswordCredentialForPersistentIdentifier:(id)a0 withResultHandler:(id /* block */)a1;
- (void)lookupCredentialsForServiceIdentifiers:(id)a0 withResultHandler:(id /* block */)a1;
- (void)removeCredentialWithPersistentIdentifier:(id)a0 withResultHandler:(id /* block */)a1;
- (void)replaceCredential:(id)a0 withNewCredential:(id)a1 resultHandler:(id /* block */)a2;
- (void)replaceOldCredential:(id)a0 withNewCredential:(id)a1 resultHandler:(id /* block */)a2;
- (id)serverProxyWithBooleanHandler:(id /* block */)a0;
- (id)serverProxyWithDualResultHandler:(id /* block */)a0;
- (id)serverProxyWithResultHandler:(id /* block */)a0;

@end
