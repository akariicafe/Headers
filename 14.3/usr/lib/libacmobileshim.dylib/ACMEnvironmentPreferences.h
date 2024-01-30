@class NSDictionary, NSString;
@protocol ACMPrincipalPreferences, ACMPreferencesStore;

@interface ACMEnvironmentPreferences : ACMPreferences <ACMEnvironmentPreferences>

@property (retain) NSDictionary *environmentSpecification;
@property (retain) id<ACMPrincipalPreferences> principalPreferences;
@property (readonly, retain) NSString *realm;
@property (retain) id<ACMPreferencesStore> preferencesStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedRealms;
+ (id)environmentPreferencesWithRealm:(id)a0;
+ (id)environmentSpecifications;
+ (BOOL)isSupportedRealm:(id)a0;

- (id)publicKeyVersion;
- (void)setPublicKeyVersion:(id)a0;
- (void)dealloc;
- (id)iForgotURL;
- (id)initWithRealm:(id)a0;
- (id)provisionedDeviceIdentifier;
- (id)myAppleIDURL;
- (id)authenticateURLString;
- (id)principalPreferencesWithUserName:(id)a0;
- (id)createPrincipalPreferencesWithUserName:(id)a0;
- (id)realmName;
- (id)realmShortName;
- (id)verifyRecoveryKeyURLString;
- (id)defaultPublicKeyString;
- (id)publicKeyCertificateName;
- (void)setPublicKeyCertificateName:(id)a0;
- (id)environmentSpecificationForRealm:(id)a0;
- (id)verifyTicketURLString;
- (id)getTrustedDevicesURLString;
- (id)generateAndSendSecCodeURLString;
- (id)verifySecurityCodeURLString;
- (id)serverHosts;
- (id)serverAttemptsDelays;

@end
