@class PSSpecifier;

@interface AssistantAudioFeedbackController : PSListController {
    PSSpecifier *_preferSilentResponsesSpecifier;
    PSSpecifier *_automaticSpecifier;
    PSSpecifier *_preferSpokenResponsesSpecifier;
    PSSpecifier *_groupSpecifier;
    long long _useDeviceSpeakerForTTSPreference;
}

+ (id)bundle;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)alwaysShowRecognizedSpeech;
- (id)specifiers;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)_localizeTriggerString:(id)a0;
- (void)_refreshFooterForSpecifier:(id)a0;
- (void)_updateSpecifiersFromPreferences;
- (id)footerVariant;
- (id)isAlwaysPrintSiriResponseEnabled:(id)a0;
- (void)preferencesDidChange:(id)a0;
- (void)setAlwaysPrintSiriResponseEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setAlwaysShowRecognizedSpeech:(id)a0 forSpecifier:(id)a1;

@end
