@interface RTManagedConfiguration_Embedded : RTManagedConfiguration

- (BOOL)effectiveBoolValueForSetting:(id)a0;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (BOOL)isFindMyCarAllowed;
- (void)dealloc;
- (BOOL)isDiagnosticsAndUsageAllowed;
- (id)stringToManagedConfigurationKey:(id)a0;
- (void)setDelegate:(id)a0;

@end
