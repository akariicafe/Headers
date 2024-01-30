@class AssistantSettingsSignalEmitter;

@interface AssistantVoiceTriggerDuringPhoneCallController : PSListController {
    AssistantSettingsSignalEmitter *_signalEmitter;
}

+ (id)bundle;

- (id)specifiers;
- (void).cxx_destruct;
- (id)_localizedFooterText;
- (id)_localizedHangUpTriggerPhrase;
- (void)_signalCallHangUpEnabled;
- (void)setVoiceTriggerDuringPhoneCallEnabled:(id)a0 specifier:(id)a1;
- (id)voiceTriggerDuringPhoneCallEnabled:(id)a0;

@end
