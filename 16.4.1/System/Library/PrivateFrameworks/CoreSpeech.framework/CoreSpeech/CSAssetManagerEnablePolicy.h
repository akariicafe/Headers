@interface CSAssetManagerEnablePolicy : CSPolicy

- (void)_subscribeEventMonitors;
- (BOOL)_shouldCheckNetworkAvailability;
- (id)init;
- (void)_addAssetManagerEnabledConditions;

@end
