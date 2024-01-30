@class VTPreferences;

@interface SRSVTPreferences : NSObject {
    VTPreferences *_preferences;
}

- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (BOOL)voiceTriggerEnabled;
- (id)localizedTriggerPhraseForLanguageCode:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setVoiceTriggerDuringPhoneCallEnabled:(BOOL)a0;
- (BOOL)voiceTriggerDuringPhoneCallEnabled;

@end
