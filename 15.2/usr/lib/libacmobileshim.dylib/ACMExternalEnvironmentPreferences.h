@interface ACMExternalEnvironmentPreferences : ACMEnvironmentPreferences

+ (id)externalEnvironmentSpecifications;

- (id)myAppleIDURL;
- (id)authenticateURLString;
- (id)defaultPublicKeyString;
- (id)environmentSpecificationForRealm:(id)a0;
- (id)verifyTicketURLString;
- (id)getTrustedDevicesURLString;
- (id)generateAndSendSecCodeURLString;
- (id)verifySecurityCodeURLString;
- (id)serverHosts;
- (id)serverAttemptsDelays;

@end
