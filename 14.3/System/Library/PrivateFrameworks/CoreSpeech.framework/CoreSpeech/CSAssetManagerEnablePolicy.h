@interface CSAssetManagerEnablePolicy : CSPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addAssetManagerEnabledConditions;
- (BOOL)_shouldCheckNetworkAvailability;

@end
