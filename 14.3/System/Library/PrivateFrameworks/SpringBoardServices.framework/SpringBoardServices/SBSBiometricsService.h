@interface SBSBiometricsService : SBSAbstractSystemService

- (void)fetchUnlockCredentialSetWithCompletion:(id /* block */)a0;
- (void)_acquireBiometricAssertionOfType:(unsigned char)a0 assertionName:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)acquireUnlockSuppressionAssertionForReason:(id)a0 completion:(id /* block */)a1;
- (void)acquireWalletPreArmSuppressionAssertionForReason:(id)a0 completion:(id /* block */)a1;

@end
