@class NSArray, NSString, NSMutableSet, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue, HMDSiriEndpointSettingsSyncManagerDataSource, HMESubscriptionProviding;

@interface HMDSiriEndpointSettingsSyncManager : HMFObject <HMFLogging, HMEEventConsumer, HMDCompositeSettingsSiriEndpointProfileBridge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, copy) NSArray *siriEndPointHomeKitBackedKeyPaths;

@property (readonly, weak) id<HMDSiriEndpointSettingsSyncManagerDataSource> dataSource;
@property (readonly) id<HMESubscriptionProviding> subscriptionProvider;
@property (readonly) NSMutableSet *homeUUIDsManagedByCurrentDevice;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void).cxx_destruct;
- (long long)siriEndpointCertificationReasonForAccessoryUUID:(id)a0 homeUUID:(id)a1 error:(id *)a2;
- (void)_stopManagingAccessory:(id)a0 forHome:(id)a1;
- (void)_beginManagingAccessory:(id)a0 forHome:(id)a1;
- (void)_beginManagingHome:(id)a0;
- (void)_matchingHomeforUUID:(id)a0 accessoryUUID:(id)a1 home:(id *)a2 accessory:(id *)a3;
- (void)_stopManagingHome:(id)a0;
- (void)_synchronizeSettingsForAccessoryUUID:(id)a0 homeUUID:(id)a1;
- (void)_updateManagedHomes;
- (void)_writeSetting:(id)a0 toAccessory:(id)a1 forKeyPath:(id)a2;
- (void)_writeSettingValue:(id)a0 toAccessory:(id)a1 forKeyPath:(id)a2;
- (void)_writeSettingValue:(id)a0 toAccessory:(id)a1 forKeyPath:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleAccessoryIsReachableNotification:(id)a0;
- (void)handleCompositeSettingsControllerDidConfigureNotification:(id)a0;
- (void)handleHAPMediaProfileAddedNotification:(id)a0;
- (void)handleHomeAddedNotification:(id)a0;
- (void)handleHomeRemovedNotification:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (void)handleSiriEndPointAddedNotification:(id)a0;
- (id)initWithDataSource:(id)a0 subscriptionProvider:(id)a1 notificationCenter:(id)a2 workQueue:(id)a3;
- (id)readValueValueForAccessoryUUID:(id)a0 homeUUID:(id)a1 forKeyPath:(id)a2;
- (void)registerForAccessoryNotificationsOnHapAccessory:(id)a0;
- (void)unregisterFromAccessoryNotificationsOnHapAccessory:(id)a0;
- (void)writeSettingValue:(id)a0 accessoryUUID:(id)a1 homeUUID:(id)a2 forKeyPath:(id)a3 completionHandler:(id /* block */)a4;

@end
