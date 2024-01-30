@class ADASPreferenceStore;

@interface ADASManager : NSObject {
    ADASPreferenceStore *_prefStore;
}

- (id)getPreferencesFor:(id)a0;
- (void)_syncDeviceSpecificDomain;
- (BOOL)shouldSufaceHAENotificationMigrationAlert;
- (id)_getDefaultsFor:(id)a0;
- (id)setNanoPreferenceFor:(id)a0 value:(id)a1 notify:(BOOL)a2;
- (BOOL)nanoSettingsAvailable;
- (id)getNanoPreferencesFor:(id)a0;
- (id)getPreferenceFor:(id)a0;
- (void)_syncNanoDeviceSpecificForRead:(id)a0;
- (void)removePreferenceFor:(id)a0;
- (BOOL)_isDeviceMandatoryForHAENotification:(BOOL)a0;
- (void)migrateKeyEnableHAEHKMeasurement:(BOOL)a0;
- (id)_getSpecialKeys:(id)a0 nano:(BOOL)a1;
- (void)removeNanoPreferenceFor:(id)a0;
- (id)_setDefaultsFor:(id)a0 value:(id)a1;
- (void)removePreferenceFor:(id)a0 notify:(BOOL)a1;
- (id)getNanoPreferenceFor:(id)a0;
- (void)_sync;
- (BOOL)_featureFlagEnabled;
- (void)_donateSignalToTipsKit:(BOOL)a0;
- (void)_syncNanoForRead:(id)a0;
- (id)_setChainedKeys:(id)a0 val:(id)a1 nano:(BOOL)a2 modifiedKeys:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isAlertSupported;
- (id)_getDefaultsKey:(id)a0;
- (id)setPreferenceFor:(id)a0 value:(id)a1 notify:(BOOL)a2;
- (id)_error:(long long)a0;
- (void)_notify:(id)a0;
- (void)_clearCurrentVolumeLimit;
- (id)setPreferenceFor:(id)a0 value:(id)a1;
- (id)_migrateVolumeLimitThreshold:(BOOL)a0;
- (id)setNanoPreferenceFor:(id)a0 value:(id)a1;
- (void)removeNanoPreferenceFor:(id)a0 notify:(BOOL)a1;
- (id)_setDeviceSpecificDefaultsFor:(id)a0 value:(id)a1;
- (void)didSurfaceMigrationAlert;
- (id)_getCurrentVolumeLimit;
- (void)_syncNanoForWrite:(id)a0;
- (id)_setDefaultValueIfNeeded:(id)a0 nano:(BOOL)a1 sync:(BOOL)a2;
- (id)_getDeviceSpecificDefaultsFor:(id)a0;

@end
