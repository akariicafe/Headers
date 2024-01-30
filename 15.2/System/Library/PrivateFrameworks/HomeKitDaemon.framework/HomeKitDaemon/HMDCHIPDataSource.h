@class HMDHomeManager, NSUUID, CHIPPluginResidentStateManager, NSNotificationCenter, CHIPPluginStorage, NSString, NSDictionary;

@interface HMDCHIPDataSource : HMFObject <CHIPPluginResidentStateManagerDataSource, CHIPPluginStorageDataSource, HMFLogging>

@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) CHIPPluginResidentStateManager *chipResidentStateManager;
@property (retain) CHIPPluginStorage *chipStorage;
@property (weak) HMDHomeManager *homeManager;
@property (copy) NSUUID *pairingTargetHomeUUID;
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly, getter=isResidentEnabledInAnyHome) BOOL residentEnabledInAnyHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSDictionary *keyValueStore;

+ (id)logCategory;

- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (id)home;
- (void)handlePrimaryResidentUpdatedNotification:(id)a0;
- (void)updateKeyValueStore:(id)a0 completion:(id /* block */)a1;
- (id)initWithHomeManager:(id)a0 notificationCenter:(id)a1;
- (void)configureWithResidentStateManager:(id)a0;
- (void)configureWithStorage:(id)a0;
- (void)handleCHIPKeyValueStoreChangedNotification:(id)a0;

@end
