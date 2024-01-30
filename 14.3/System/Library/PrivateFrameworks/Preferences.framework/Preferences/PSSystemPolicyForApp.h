@class PSContactsPolicyController, NSString, PSAccountEnumerator, NEConfiguration, PSPhotosPolicyController;
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
@property (weak, nonatomic) id<PSSystemPolicyForAppDelegate> delegate;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)isServiceRestricted:(id)a0;

- (void).cxx_destruct;
- (id)specifiersForPolicyOptions:(unsigned long long)a0 force:(BOOL)a1;
- (id)privacySpecifiers;
- (id)assistantAndSearchSpecifiers;
- (id)notificationSpecifier;
- (id)privacySpecifierForService:(struct __CFString { } *)a0;
- (id)backgroundAppRefreshSpecifier;
- (id)documentsSpecifier;
- (id)wirelessDataSpecifierWithAppName:(id)a0;
- (id)exposureSpecifiers;
- (id)defaultBrowserSpecifier;
- (id)defaultMailAppSpecifier;
- (id)trackingSpecifiers;
- (id)preferredLanguageSpecifier;
- (id)accountsSpecifier;
- (void)_handleAddAccountButtonAction:(id)a0;
- (id)dataUsageWorkspaceInfo;
- (BOOL)_accountModificationDisabledByRestrictions;
- (BOOL)isCellularBundleID:(id)a0;
- (id)documentSource:(id)a0;
- (BOOL)_isWirelessDataRestricted;
- (BOOL)_supportsBackgroundAppRefresh;
- (void)setBackgroundRefreshEnabled:(id)a0 forSpecifier:(id)a1;
- (id)isBackgroundRefreshEnabled:(id)a0;
- (BOOL)_isBackgroundAppRefreshAllowed;
- (BOOL)getMulticastAllowed:(BOOL *)a0;
- (void)loadNetworkConfigurationsForceRefresh:(BOOL)a0;
- (id)pathRuleForBundleID:(id)a0 create:(BOOL)a1;
- (id)locationStatus:(id)a0;
- (void)saveNetworkConfiguration;
- (void)setupNetworkConfiguration;
- (id)isLocalNetworkEnabled:(id)a0;
- (void)setLocalNetworkEnabled:(id)a0 specifier:(id)a1;
- (BOOL)_isLocationServicesRestricted;
- (id)authLevelStringForStatus:(unsigned long long)a0;
- (id)locationServicesSpecifier;
- (id)photosServicesSpecifier;
- (id)networkServicesSpecifier;
- (id)_privacyAccessForService:(struct __CFString { } *)a0;
- (void)setPrivacyAccess:(id)a0 forSpecifier:(id)a1;
- (id)privacyAccessForSpecifier:(id)a0;
- (struct __CFBundle { } *)copyTCCBundleForService:(struct __CFString { } *)a0;
- (id)preferredLanguage:(id)a0;
- (id)defaultBrowser:(id)a0;
- (void)setDefaultBrowser:(id)a0 specifier:(id)a1;
- (id)defaultAppSpecifierWithAppRecordsMatchingBlock:(id /* block */)a0 getter:(SEL)a1 setter:(SEL)a2 title:(id)a3;
- (id)defaultMailApp:(id)a0;
- (void)setDefaultMailApp:(id)a0 specifier:(id)a1;
- (id)contactsServicesSpecifier;
- (void)headerLinkWasTapped;
- (id)specifiers;
- (id)initWithBundleIdentifier:(id)a0;

@end
