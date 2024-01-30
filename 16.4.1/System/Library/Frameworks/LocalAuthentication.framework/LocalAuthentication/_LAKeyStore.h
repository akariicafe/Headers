@class NSString, LAKeyStoreSecretCoder;
@protocol LAKeyStoreBackend;

@interface _LAKeyStore : NSObject <_LAKeyStoreGenericPasswordCryptor, LAKeyStore> {
    id<LAKeyStoreBackend> _backend;
    LAKeyStoreSecretCoder *_coder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)fetchKeysWithDomain:(id)a0 completion:(id /* block */)a1;
- (void)decryptData:(id)a0 publicKeyHash:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)encryptData:(id)a0 publicKeyHash:(id)a1 completion:(id /* block */)a2;
- (void)fetchGenericPasswordWithIdentifier:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)fetchGenericPasswordsWithDomain:(id)a0 completion:(id /* block */)a1;
- (void)fetchItemsWithDomain:(id)a0 completion:(id /* block */)a1;
- (void)fetchKeyWithIdentifier:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)fetchKeyWithPublicKeyHash:(id)a0 completion:(id /* block */)a1;
- (void)removeGenericPasswordsWithDomain:(id)a0 completion:(id /* block */)a1;
- (void)removeItemsWithCompletion:(id /* block */)a0;
- (void)removeItemsWithDomain:(id)a0 completion:(id /* block */)a1;
- (void)removeKeysWithDomain:(id)a0 completion:(id /* block */)a1;
- (void)storeGenericPassword:(id)a0 identifier:(id)a1 domain:(id)a2 protectedBy:(id)a3 completion:(id /* block */)a4;
- (void)storeKeyWithIdentifier:(id)a0 domain:(id)a1 protectedBy:(id)a2 completion:(id /* block */)a3;

@end
