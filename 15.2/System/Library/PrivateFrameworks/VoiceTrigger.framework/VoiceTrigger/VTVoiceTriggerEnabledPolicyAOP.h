@interface VTVoiceTriggerEnabledPolicyAOP : VTPolicy

- (void)_addVoiceTriggerEnabledConditions;
- (id)init;
- (void)_subscribeEventMonitors;

@end
