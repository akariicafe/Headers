@interface VTPhraseSpotterEnabledPolicy : VTPolicy

- (void)_addVoiceTriggerEnabledConditions;
- (id)init;
- (void)_subscribeEventMonitors;

@end
