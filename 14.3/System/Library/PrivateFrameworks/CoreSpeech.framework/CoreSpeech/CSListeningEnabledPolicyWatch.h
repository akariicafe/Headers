@interface CSListeningEnabledPolicyWatch : CSPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addListeningEnabledConditions;

@end
