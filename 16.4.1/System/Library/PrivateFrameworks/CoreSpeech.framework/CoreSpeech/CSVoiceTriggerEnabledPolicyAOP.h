@interface CSVoiceTriggerEnabledPolicyAOP : CSPolicy

- (void)_subscribeEventMonitors;
- (id)init;
- (void)_addVoiceTriggerEnabledConditions;

@end
