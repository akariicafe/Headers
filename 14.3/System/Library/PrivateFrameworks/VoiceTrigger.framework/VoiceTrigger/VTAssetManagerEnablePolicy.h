@interface VTAssetManagerEnablePolicy : VTPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addAssetManagerEnabledConditions;

@end
