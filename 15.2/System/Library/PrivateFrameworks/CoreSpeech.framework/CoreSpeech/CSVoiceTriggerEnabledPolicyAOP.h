@interface CSVoiceTriggerEnabledPolicyAOP : CSPolicy

- (void)_addVoiceTriggerEnabledConditions;
- (id)init;
- (void)_subscribeEventMonitors;

@end
