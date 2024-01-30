@interface RTManagedConfiguration_Embedded : RTManagedConfiguration

- (BOOL)isHealthDataSubmissionAllowed;
- (BOOL)isFindMyCarAllowed;
- (BOOL)effectiveBoolValueForSetting:(id)a0;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)setDelegate:(id)a0;
- (BOOL)isDiagnosticsAndUsageAllowed;
- (void)dealloc;
- (id)stringToManagedConfigurationKey:(id)a0;

@end
