@class NSMutableSet, PSSpecifier;

@interface AssistantDetailController : PSListController {
    NSMutableSet *_disabledSpotlightBundles;
    NSMutableSet *_disabledLockScreenBundles;
    NSMutableSet *_disabledSpotlightApps;
    NSMutableSet *_disabledSpotlightShortcuts;
    NSMutableSet *_disabledSuggestApps;
    PSSpecifier *_onHomeScreenGroup;
    PSSpecifier *_onHomeScreenShowAppSpecifier;
    PSSpecifier *_onHomeScreenSuggestAppSpecifier;
    PSSpecifier *_onHomeScreenShowContentSpecifier;
    PSSpecifier *_onHomeScreenShowSuggestionsSpecifier;
    PSSpecifier *_onLockScreenGroup;
    PSSpecifier *_onLockScreenShowSuggestionsSpecifier;
}

- (id)_bundleId;
- (void).cxx_destruct;
- (id)specifiers;
- (id)_appName;
- (void)viewWillAppear:(BOOL)a0;
- (void)_fetchIntentsSpecifiersWithCompletion:(id /* block */)a0;
- (id)_loadDisabledShortcutsSet;
- (id)_loadDisabledSuggestAppsSet;
- (void)_addInAppSpecifiersToSpecifiers:(id)a0;
- (void)_addonHomeScreenSpecifiersToSpecifiers:(id)a0;
- (void)_asyncAddAskSiriSettingsIfNecessary;
- (id)_siriSuggestionsClients;
- (id)_inAppFooterString;
- (id)_inAppShowToggleLableString;
- (void)setInAppShowSiriSuggestionsEnabled:(id)a0 specifier:(id)a1;
- (id)inAppShowSiriSuggestionsEnabled:(id)a0;
- (void)setInAppLearnFromAppEnabled:(id)a0 specifier:(id)a1;
- (id)inAppLearnFromAppEnabled:(id)a0;
- (id)_watchBundleToMirrorWithBundleId:(id)a0;
- (void)setNanoInAppShowSiriSuggestionsEnabled:(BOOL)a0 bundleId:(id)a1;
- (void)setOnHomeScreenShowAppEnabled:(id)a0 specifier:(id)a1;
- (id)onHomeScreenShowAppEnabled:(id)a0;
- (void)setOnHomeScreenSuggestAppEnabled:(id)a0 specifier:(id)a1;
- (id)onHomeScreenSuggestAppEnabled:(id)a0;
- (void)setOnHomeScreenShowContentEnabled:(id)a0 specifier:(id)a1;
- (id)onHomeScreenShowContentEnabled:(id)a0;
- (void)setOnHomeScreenShowSuggestionsEnabled:(id)a0 specifier:(id)a1;
- (id)onHomeScreenShowSuggestionsEnabled:(id)a0;
- (void)setOnLockScreenShowSuggestionsEnabled:(id)a0 specifier:(id)a1;
- (id)onLockScreenShowSuggestionsEnabled:(id)a0;
- (void)_saveOnHomeScreenShowContentEnabled:(BOOL)a0;
- (void)_saveOnHomeScreenShowSuggestionsEnabled:(BOOL)a0;
- (void)_saveOnHomeScreenSuggestAppEnabled:(BOOL)a0;
- (void)_saveOnHomeScreenShowAppEnabled:(BOOL)a0;
- (void)_saveOnLockScreenShowSuggestionsEnabled:(BOOL)a0;
- (id)_enableSiriAppSpecifiersWithAppId:(id)a0 accessGranted:(BOOL)a1;
- (void)setAskSiriUseWithAskSiriEnabled:(id)a0 specifier:(id)a1;
- (id)askSiriUseWithAskSiriEnabled:(id)a0;

@end
