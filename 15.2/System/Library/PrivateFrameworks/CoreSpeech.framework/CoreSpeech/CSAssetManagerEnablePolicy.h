@interface CSAssetManagerEnablePolicy : CSPolicy

- (BOOL)_shouldCheckNetworkAvailability;
- (void)_addAssetManagerEnabledConditions;
- (id)init;
- (void)_subscribeEventMonitors;

@end
