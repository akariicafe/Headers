@class DNDSSyncSettings, NPSDomainAccessor;
@protocol DNDSSyncSettingsProviderDelegate;

@interface DNDSSyncSettingsProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NPSDomainAccessor *_accessor;
    BOOL _initialized;
}

@property (copy) DNDSSyncSettings *syncSettings;
@property (weak, nonatomic) id<DNDSSyncSettingsProviderDelegate> delegate;

- (void)_lock_setCompanionCloudSyncPreferenceEnabled:(BOOL)a0;
- (void)_lock_updateCompanionCloudSyncPreference;
- (void)_updateCloudSyncPreferences;
- (void)_beginMonitoringForChanges;
- (void)_lock_updatePairSyncPreferences;
- (BOOL)_lock_isPairSyncPreferenceEnabled;
- (void)_updatePairSyncPreferences;
- (void)dealloc;
- (BOOL)_lock_isCloudSyncPreferenceEnabled;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_endMonitoringForChanges;
- (id)_lock_accessor;
- (id)init;
- (BOOL)_isCloudSyncPreferenceEnabled;
- (void)setPairSyncEnabled:(BOOL)a0;
- (void)pairedDeviceDidChange;
- (void).cxx_destruct;
- (void)_lock_updateSyncSettingsIfNewSettingsDiffer:(id)a0;

@end
