@class PSSpecifier;

@interface AssistantAudioFeedbackController : PSListController {
    PSSpecifier *_switchWithRingerSpecifier;
    PSSpecifier *_alwaysSpecifier;
    PSSpecifier *_handsfreeSpecifier;
    PSSpecifier *_groupSpecifier;
    long long _useDeviceSpeakerForTTSPreference;
}

+ (id)bundle;

- (void).cxx_destruct;
- (id)alwaysShowRecognizedSpeech;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_localizeTriggerString:(id)a0;
- (void)preferencesDidChange:(id)a0;
- (void)_updateSpecifiersFromPreferences;
- (void)_refreshFooterForSpecifier:(id)a0;
- (id)footerVariant;
- (id)isAlwaysPrintSiriResponseEnabled:(id)a0;
- (void)setAlwaysPrintSiriResponseEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setAlwaysShowRecognizedSpeech:(id)a0 forSpecifier:(id)a1;

@end
