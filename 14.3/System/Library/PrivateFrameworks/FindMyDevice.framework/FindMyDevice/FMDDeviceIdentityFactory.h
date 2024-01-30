@interface FMDDeviceIdentityFactory : NSObject

- (void)baaIdentityAttestationForSigningRequest:(id)a0 completion:(id /* block */)a1;
- (void)identityForPasscodeActivationUnlockWithContext:(id)a0 completion:(id /* block */)a1;

@end
