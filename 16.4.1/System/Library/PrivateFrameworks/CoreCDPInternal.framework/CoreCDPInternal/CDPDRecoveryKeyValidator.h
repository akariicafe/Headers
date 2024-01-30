@interface CDPDRecoveryKeyValidator : CDPDDeviceSecretValidator

- (void)validateRecoveryKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)_validateRecoveryKey:(id)a0 completion:(id /* block */)a1;

@end
