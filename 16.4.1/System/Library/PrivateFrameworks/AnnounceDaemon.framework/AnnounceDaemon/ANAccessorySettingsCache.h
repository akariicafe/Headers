@class NSMutableDictionary, NSString, HMAccessorySettingsDataSource, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface ANAccessorySettingsCache : NSObject <HMAccessorySettingsDataSourceDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue;
@property (readonly, nonatomic) HMAccessorySettingsDataSource *accessorySettingsDataSource;
@property (readonly, nonatomic) NSMutableDictionary *cachedAccessorySettings;
@property (readonly, nonatomic) NSMutableDictionary *lastAccessorySettingsFetch;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accessorySettingsDataSource:(id)a0 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)a1 settings:(id)a2;
- (id)settingsForAccessory:(id)a0;
- (void)_removeSettingsForAccessoryWithIdentifier:(id)a0;
- (id)_fetchSettingsForAccessory:(id)a0 useCache:(BOOL)a1;
- (id)initWithAccessorySettingsDataSource:(id)a0;
- (void)_updateSettings:(id)a0 forAccessoryWithIdentifier:(id)a1;
- (void).cxx_destruct;

@end
