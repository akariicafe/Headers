@interface AssistantSettingsSignalEmitter : NSObject

- (void)_emitDiscoverabilitySignalEventForIdentifier:(id)a0;
- (void)emitCallHangUpEnabledSignal;
- (void)emitDidSelectVoiceSignal;

@end
