@class NSString, SORealmSettingManager, LAContext;

@interface SOKerberosAuthentication : NSObject

@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) SORealmSettingManager *settingsManager;
@property BOOL siteDiscoveryInProgress;
@property (retain, nonatomic) LAContext *smartcardLAContext;

+ (void)saveValuesForPlugins:(id)a0;

- (void).cxx_destruct;
- (void)triggerVPNIfNeededUsingRealm:(id)a0 bundleIdentifier:(id)a1 auditToken:(id)a2;
- (id)retrieveCachedSiteCodeFromCacheForBundleIdentifier:(id)a0 networkFingerprint:(id)a1;
- (void)determineSiteCodeUsingContext:(id)a0;
- (unsigned long long)findExistingCredentialUsingContext:(id)a0 returningCredential:(struct gss_cred_id_t_desc_struct **)a1 orError:(id *)a2;
- (void)setSiteCodeUsingContext:(id)a0;
- (unsigned long long)createNewCredentialUsingContext:(id)a0 returningCredential:(struct gss_cred_id_t_desc_struct **)a1 orError:(id *)a2;
- (unsigned long long)mapErrorToKnownError:(id)a0;
- (void)_determineSiteCodeUsingDispatchGroup:(id)a0 bundleIdentifier:(id)a1 auditTokenData:(id)a2 networkFingerprint:(id)a3 requireTLSForLDAP:(BOOL)a4;
- (id)initWithRealm:(id)a0 andSettingsManager:(id)a1;
- (unsigned long long)attemptKerberosWithContext:(id)a0 returningToken:(id *)a1 orError:(id *)a2;
- (BOOL)changePasswordWithContext:(id)a0 withError:(id *)a1;

@end
