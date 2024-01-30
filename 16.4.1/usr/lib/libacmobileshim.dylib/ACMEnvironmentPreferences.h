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

- (id)iForgotURL;
- (void)dealloc;
- (id)publicKeyVersion;
- (void)setPublicKeyVersion:(id)a0;
- (id)initWithRealm:(id)a0;
- (id)generateAndSendSecCodeURLString;
- (id)authenticateURLString;
- (id)createPrincipalPreferencesWithUserName:(id)a0;
- (id)defaultPublicKeyString;
- (id)environmentSpecificationForRealm:(id)a0;
- (id)getTrustedDevicesURLString;
- (id)myAppleIDURL;
- (id)principalPreferencesWithUserName:(id)a0;
- (id)provisionedDeviceIdentifier;
- (id)publicKeyCertificateName;
- (id)realmName;
- (id)realmShortName;
- (id)serverAttemptsDelays;
- (id)serverHosts;
- (void)setPublicKeyCertificateName:(id)a0;
- (id)verifyRecoveryKeyURLString;
- (id)verifySecurityCodeURLString;
- (id)verifyTicketURLString;

@end
