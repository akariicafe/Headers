@class PSSystemPolicyForApp, NSString, PSDriverPolicyForApp;

@interface PSThirdPartyAppController : PSSpecifierController <PSSystemPolicyForAppDelegate, PSDriverPolicyForAppDelegate>

@property (retain, nonatomic) PSSystemPolicyForApp *appPolicy;
@property (retain, nonatomic) PSSystemPolicyForApp *systemPolicy;
@property (retain, nonatomic) PSDriverPolicyForApp *driverPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bundle;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (id)_readToggleSwitchSpecifierValue:(id)a0;
- (void)_setToggleSwitchSpecifierValue:(id)a0 specifier:(id)a1;
- (id)_uiValueFromValue:(id)a0 specifier:(id)a1;
- (id)_valueFromUIValue:(id)a0 specifier:(id)a1;
- (id)loadSpecifiers;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)a0;
- (void)showPrivacyControllerForBundleID:(id)a0;
- (void)showPrivacyControllerForBundleName:(id)a0;

@end
