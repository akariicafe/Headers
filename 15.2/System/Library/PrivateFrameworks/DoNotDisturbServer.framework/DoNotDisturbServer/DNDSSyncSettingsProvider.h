@class DNDSSyncSettings, NPSDomainAccessor;
@protocol DNDSSyncSettingsProviderDelegate;

@interface DNDSSyncSettingsProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NPSDomainAccessor *_accessor;
    BOOL _initialized;
}

@property (copy) DNDSSyncSettings *syncSettings;
@property (weak, nonatomic) id<DNDSSyncSettingsProviderDelegate> delegate;

- (void)_beginMonitoringForChanges;
- (void)pairedDeviceDidChange;
- (id)_lock_accessor;
- (void)setPairSyncEnabled:(BOOL)a0;
- (void)_lock_updateCompanionCloudSyncPreference;
- (BOOL)_isCloudSyncPreferenceEnabled;
- (void)_endMonitoringForChanges;
- (void)_lock_setCompanionCloudSyncPreferenceEnabled:(BOOL)a0;
- (void)_lock_updateSyncSettingsIfNewSettingsDiffer:(id)a0;
- (void)_lock_updatePairSyncPreferences;
- (void)_updatePairSyncPreferences;
- (void)_updateCloudSyncPreferences;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_lock_isPairSyncPreferenceEnabled;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (BOOL)_lock_isCloudSyncPreferenceEnabled;

@end
