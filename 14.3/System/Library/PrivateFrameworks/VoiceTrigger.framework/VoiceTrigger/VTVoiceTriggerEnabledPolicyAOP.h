@interface VTVoiceTriggerEnabledPolicyAOP : VTPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addVoiceTriggerEnabledConditions;

@end
