@interface VTPhraseSpotterEnabledPolicy : VTPolicy

- (void)_subscribeEventMonitors;
- (id)init;
- (void)_addVoiceTriggerEnabledConditions;

@end
