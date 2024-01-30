@class PSPhotosPolicyController, NSString, PSSpecifier, PSContactsPolicyController, PSAccountEnumerator, NEConfiguration, NSUserDefaults;
@protocol PSSystemPolicyForAppDelegate;

@interface PSSystemPolicyForApp : NSObject {
    unsigned long long _policyOptions;
    BOOL _forcePolicyOptions;
    PSPhotosPolicyController *_photosPrivacyController;
    PSContactsPolicyController *_contactsPrivacyController;
    PSAccountEnumerator *_accountEnumerator;
    NEConfiguration *_pathControllerConfiguration;
}

@property (nonatomic) BOOL enServiceMatched;
@property (retain, nonatomic) NSString *matchingBundleIdentifier;
@property (retain, nonatomic) NSString *containerPathForCurrentApp;
@property (retain, nonatomic) NSUserDefaults *appUserDefaults;
@property (retain, nonatomic) PSSpecifier *cinematicFramingSpecifier;
@property (weak, nonatomic) id<PSSystemPolicyForAppDelegate> delegate;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)isServiceRestricted:(id)a0;

- (id)specifiers;
- (id)specifiersForPolicyOptions:(unsigned long long)a0 force:(BOOL)a1;
- (id)notificationSpecifier;
- (id)privacySpecifiersWithTCCServiceLookup:(id)a0 tccServiceOverrides:(id)a1;
- (id)defaultBrowserSpecifier;
- (id)initWithBundleIdentifier:(id)a0;
- (id)assistantAndSearchSpecifiers;
- (id)backgroundAppRefreshSpecifier;
- (id)defaultMailAppSpecifier;
- (id)privacySpecifierForService:(struct __CFString { } *)a0 tccServiceLookup:(id)a1 tccServiceOverrides:(id)a2;
- (id)documentsSpecifier;
- (id)wirelessDataSpecifierWithAppName:(id)a0;
- (id)exposureSpecifiersWithTCCServiceLookup:(id)a0;
- (id)trackingSpecifiersWithTCCServiceLookup:(id)a0 tccServiceOverrides:(id)a1;
- (id)accountsSpecifier;
- (id)preferredLanguageSpecifier;
- (id)familyControlsSpecifier;
- (void)_handleAddAccountButtonAction:(id)a0;
- (BOOL)_accountModificationDisabledByRestrictions;
- (id)dataUsageWorkspaceInfo;
- (BOOL)isCellularBundleID:(id)a0;
- (BOOL)_isWirelessDataRestricted;
- (long long)_getAuthorizationRecordsStatus;
- (void)setFamilyControlsEnabled:(id)a0 forSpecifier:(id)a1;
- (id)locationStatus:(id)a0;
- (id)isFamilyControlsEnabled:(id)a0;
- (BOOL)getMulticastAllowed:(BOOL *)a0;
- (BOOL)_supportsBackgroundAppRefresh;
- (void)setBackgroundRefreshEnabled:(id)a0 forSpecifier:(id)a1;
- (id)isBackgroundRefreshEnabled:(id)a0;
- (BOOL)_isBackgroundAppRefreshAllowed;
- (void)saveNetworkConfiguration;
- (void)loadNetworkConfigurationsForceRefresh:(BOOL)a0;
- (id)pathRuleForBundleID:(id)a0 create:(BOOL)a1;
- (id)documentSource:(id)a0;
- (void)setupNetworkConfiguration;
- (void)setLocalNetworkEnabled:(id)a0 specifier:(id)a1;
- (id)isLocalNetworkEnabled:(id)a0;
- (BOOL)_isLocationServicesRestricted;
- (id)authLevelStringForStatus:(unsigned long long)a0;
- (id)locationServicesSpecifier;
- (id)photosServicesSpecifier;
- (id)networkServicesSpecifier;
- (void)setPrivacyAccess:(id)a0 forSpecifier:(id)a1;
- (id)privacyAccessForSpecifier:(id)a0;
- (id)preferredLanguage:(id)a0;
- (id)defaultBrowser:(id)a0;
- (void)setDefaultBrowser:(id)a0 specifier:(id)a1;
- (void)setDefaultMailApp:(id)a0 specifier:(id)a1;
- (id)contactsServicesSpecifier;
- (id)defaultAppSpecifierWithAppRecordsMatchingBlock:(id /* block */)a0 getter:(SEL)a1 setter:(SEL)a2 title:(id)a3;
- (id)defaultMailApp:(id)a0;
- (void)headerLinkWasTapped;
- (BOOL)_isAppClip;
- (void).cxx_destruct;

@end
