@class PSSystemPolicyForApp, NSString;

@interface PSAppListController : PSListController <PSSystemPolicyForAppDelegate>

@property (retain, nonatomic) PSSystemPolicyForApp *appPolicy;
@property (retain, nonatomic) PSSystemPolicyForApp *systemPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleValueSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)onBoardingKitBundleIDDict;
+ (id)sliderSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)childPaneSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)radioGroupSpecifiersFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)allowedPrivacyBundles;
+ (id)specifiersFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)localizedTitlesFromUnlocalizedTitles:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2;
+ (id)multiValueSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)groupSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)textFieldSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (BOOL)canUseOnBoardingKitForPrivacyDisplayForBundleID:(id)a0;
+ (id)toggleSwitchSpecifierFromDictionary:(id)a0 stringsTable:(id)a1 parentSpecifier:(id)a2 target:(id)a3;
+ (id)_typeErrorStringForKeyWithName:(id)a0 expectedType:(Class)a1 actualType:(Class)a2;

- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void).cxx_destruct;
- (id)bundle;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)_uiValueFromValue:(id)a0 specifier:(id)a1;
- (id)_valueFromUIValue:(id)a0 specifier:(id)a1;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)a0;
- (id)_readToggleSwitchSpecifierValue:(id)a0;
- (void)_setToggleSwitchSpecifierValue:(id)a0 specifier:(id)a1;
- (void)showPrivacyControllerForSpecifier:(id)a0;

@end
