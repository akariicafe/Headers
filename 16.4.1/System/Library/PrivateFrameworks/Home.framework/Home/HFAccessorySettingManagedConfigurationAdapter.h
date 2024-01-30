@class MCProfileConnection, NSString, NSHashTable;

@interface HFAccessorySettingManagedConfigurationAdapter : HFAccessorySettingAdapter <MCProfileConnectionObserver, HFAccessorySettingAdapterDisplayArbitrating>

@property (nonatomic) BOOL isSettingUp;
@property (retain, nonatomic) NSHashTable *profileObservers;
@property (readonly, nonatomic) MCProfileConnection *profileConnectionForSynchronization;
@property (readonly, nonatomic) unsigned long long numberOfProfiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)profiles;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (void)removeProfileObserver:(id)a0;
- (void)addProfileObserver:(id)a0;
- (void).cxx_destruct;
- (id)profilesSettingFuture;
- (id)removeProfileFromHomeKit:(id)a0;
- (BOOL)shouldShowSettingsEntity:(id)a0;
- (void)homeKitSettingWasUpdated:(id)a0 value:(id)a1;
- (id)_beginMonitoringSettingsKeyPath:(id)a0;
- (void)_dispatchWasUpdated;
- (id)_installedProfileData;
- (id)_profilesSettingData;
- (void)_rebootForReason:(id)a0;
- (id)_removeProfileFromProfileManager:(id)a0;
- (void)_setupDebugHandler;
- (id)_synchronizeHomeKitToManagedConfiguration;
- (id)_synchronizeManagedConfigurationToHomeKit;
- (id)initWithHomeKitSettingsVendor:(id)a0 keyPaths:(id)a1 mode:(unsigned long long)a2 updateHandler:(id /* block */)a3;
- (id)initWithHomeKitSettingsVendor:(id)a0 keyPaths:(id)a1 updateHandler:(id /* block */)a2;
- (id)initWithHomeKitSettingsVendor:(id)a0 mode:(unsigned long long)a1;
- (id)removeProfileDataFromHomeKit:(id)a0;

@end
