@interface VTAssetManagerEnablePolicy : VTPolicy

- (void)_addAssetManagerEnabledConditions;
- (id)init;
- (void)_subscribeEventMonitors;

@end
