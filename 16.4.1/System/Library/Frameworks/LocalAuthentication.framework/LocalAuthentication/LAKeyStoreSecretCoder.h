@interface LAKeyStoreSecretCoder : NSObject

- (id)_generateNonce;
- (BOOL)_isCoderAvailable;
- (void)unwrapData:(id)a0 completion:(id /* block */)a1;
- (void)wrapData:(id)a0 completion:(id /* block */)a1;

@end
