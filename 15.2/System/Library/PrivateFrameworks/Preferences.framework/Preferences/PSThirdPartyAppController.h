@class PSSystemPolicyForApp, NSString;

@interface PSThirdPartyAppController : PSSpecifierController <PSSystemPolicyForAppDelegate>

@property (retain, nonatomic) PSSystemPolicyForApp *appPolicy;
@property (retain, nonatomic) PSSystemPolicyForApp *systemPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (id)bundle;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_uiValueFromValue:(id)a0 specifier:(id)a1;
- (id)_valueFromUIValue:(id)a0 specifier:(id)a1;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)a0;
- (id)_readToggleSwitchSpecifierValue:(id)a0;
- (void)_setToggleSwitchSpecifierValue:(id)a0 specifier:(id)a1;
- (void)showPrivacyControllerForBundleName:(id)a0;
- (void)showPrivacyControllerForBundleID:(id)a0;
- (id)loadSpecifiers;
- (void)showController:(id)a0 animate:(BOOL)a1;

@end
