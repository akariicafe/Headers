@interface FMDDeviceIdentityFactory : NSObject

- (void)identityForPasscodeActivationUnlockWithContext:(id)a0 completion:(id /* block */)a1;
- (void)baaIdentityAttestationForSigningRequest:(id)a0 completion:(id /* block */)a1;

@end
