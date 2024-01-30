@interface CSListeningEnabledPolicyWatch : CSPolicy

- (void)_subscribeEventMonitors;
- (id)init;
- (void)_addListeningEnabledConditions;

@end
