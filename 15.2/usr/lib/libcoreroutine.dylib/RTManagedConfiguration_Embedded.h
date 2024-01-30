@interface RTManagedConfiguration_Embedded : RTManagedConfiguration

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (id)stringToManagedConfigurationKey:(id)a0;
- (BOOL)effectiveBoolValueForSetting:(id)a0;
- (BOOL)isDiagnosticsAndUsageAllowed;
- (BOOL)isFindMyCarAllowed;
- (void)setDelegate:(id)a0;
- (void)dealloc;

@end
