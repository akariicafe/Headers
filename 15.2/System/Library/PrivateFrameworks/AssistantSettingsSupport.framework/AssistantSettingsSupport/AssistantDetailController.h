@class NSMutableSet, PSSpecifier;

@interface AssistantDetailController : PSListController {
    NSMutableSet *_disabledSpotlightBundles;
    NSMutableSet *_disabledLockScreenBundles;
    NSMutableSet *_disabledSpotlightApps;
    NSMutableSet *_disabledSpotlightShortcuts;
    NSMutableSet *_disabledSuggestApps;
    PSSpecifier *_whileSearchingGroup;
    PSSpecifier *_whileSearchingShowAppSpecifier;
    PSSpecifier *_whileSearchingShowContentSpecifier;
}

- (id)specifiers;
- (id)_bundleId;
- (id)_appName;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_fetchIntentsSpecifiersWithCompletion:(id /* block */)a0;
- (id)_loadDisabledShortcutsSet;
- (id)_loadDisabledSuggestAppsSet;
- (void)_addInAppSpecifiersToSpecifiers:(id)a0;
- (void)_addWhileSearchingSpecifiersToSpecifiers:(id)a0;
- (void)_addSuggestionsSpecifiersToSpecifiers:(id)a0;
- (void)_asyncAddAskSiriSettingsIfNecessary;
- (void)setInAppLearnFromAppEnabled:(id)a0 specifier:(id)a1;
- (id)inAppLearnFromAppEnabled:(id)a0;
- (void)setWhileSearchingShowAppEnabled:(id)a0 specifier:(id)a1;
- (id)whileSearchingShowAppEnabled:(id)a0;
- (void)setWhileSearchingShowContentEnabled:(id)a0 specifier:(id)a1;
- (id)whileSearchingShowContentEnabled:(id)a0;
- (void)_saveWhileSearchingShowAppEnabled:(BOOL)a0;
- (void)_saveWhileSearchingShowContentEnabled:(BOOL)a0;
- (id)_suggestionsFooterString;
- (id)_siriSuggestionsClients;
- (id)_suggestionsShowToggleLableString;
- (void)setSuggestionsShowInAppEnabled:(id)a0 specifier:(id)a1;
- (id)suggestionsShowInAppEnabled:(id)a0;
- (void)setSuggestionsShowOnHomeScreenEnabled:(id)a0 specifier:(id)a1;
- (id)suggestionsShowOnHomeScreenEnabled:(id)a0;
- (void)setSuggestionsSuggestAppEnabled:(id)a0 specifier:(id)a1;
- (id)suggestionsSuggestAppEnabled:(id)a0;
- (void)setSuggestionsSuggestionNotificationsEnabled:(id)a0 specifier:(id)a1;
- (id)suggestionsSuggestionNotificationEnabled:(id)a0;
- (id)_watchBundleToMirrorWithBundleId:(id)a0;
- (void)setNanoInAppShowSiriSuggestionsEnabled:(BOOL)a0 bundleId:(id)a1;
- (void)_saveSuggestionsShowOnHomeScreenEnabled:(BOOL)a0;
- (void)_saveSuggestionsSuggestAppEnabled:(BOOL)a0;
- (void)_saveSuggestionsSuggestionNotificationsEnabled:(BOOL)a0;
- (id)_enableSiriAppSpecifiersWithAppId:(id)a0 accessGranted:(BOOL)a1;
- (void)setAskSiriUseWithAskSiriEnabled:(id)a0 specifier:(id)a1;
- (id)askSiriUseWithAskSiriEnabled:(id)a0;

@end
