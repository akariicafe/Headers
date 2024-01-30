@class NSUUID, NSNumber, NSString, NSMutableDictionary, HMFMessageDispatcher, HMDDevice, NSObject, HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation, NSNotificationCenter, HMDHome;
@protocol OS_dispatch_queue, HMDHomeWalletKeyAccessoryManagerDelegate, HMDHomeWalletDataSource;

@interface HMDHomeWalletKeyAccessoryManager : HMFObject <HMFLogging, HMFMessageReceiver>

@property (weak) HMDHome *home;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMDHomeWalletDataSource> dataSource;
@property (getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property BOOL canConfigureAccessories;
@property (readonly, copy) NSMutableDictionary *pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID;
@property (copy) HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation *pendingPrimaryResidentDeviceCredentialKeyOperation;
@property (readonly) NSMutableDictionary *accessoriesUUIDsByDeviceCredentialKey;
@property (readonly, copy) NSMutableDictionary *nfcReaderKeyConfigureStateByAccessoryUUID;
@property (readonly) HMDDevice *primaryResidentDevice;
@property (readonly, copy) NSNumber *walletKeyColor;
@property (readonly, copy) NSString *walletKeyColorPreferenceKey;
@property (weak) id<HMDHomeWalletKeyAccessoryManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)fetchWalletKeyColorWithCompletion:(id /* block */)a0;
- (void)handleHomeDidEnableCharacteristicNotification:(id)a0;
- (void)handleHomeDidDisableCharacteristicNotification:(id)a0;
- (void)configureWithHome:(id)a0;
- (id)initWithUUID:(id)a0 workQueue:(id)a1;
- (void)handleHomeAddedAccessoryNotification:(id)a0;
- (void)handleHomeAccessoryRemovedNotification:(id)a0;
- (void)handleWalletKeyRemoved;
- (void)configureAccessory:(id)a0 withDeviceCredentialKey:(id)a1 completion:(id /* block */)a2;
- (void)configureAllAccessoriesWithDeviceCredentialKey:(id)a0 completion:(id /* block */)a1;
- (void)configureNFCReaderKeyForAllAccessories;
- (void)handleAccessoryCharacteristicsChangedNotification:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (void)handleAccessoryConnected:(id)a0;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 dataSource:(id)a2 notificationCenter:(id)a3;
- (void)createAccessoryDeviceCredentialKeyPendingOperationWithAccessoriesUUIDs:(id)a0 deviceCredentialKey:(id)a1 user:(id)a2 deviceUUID:(id)a3;
- (void)createAccessoryDeviceCredentialKeyPendingOperationWithAccessories:(id)a0 deviceCredentialKey:(id)a1 user:(id)a2 deviceUUID:(id)a3;
- (void)handleConfigureAccessoriesWithDeviceCredentialKeyMessage:(id)a0;
- (void)handleHomeNFCReaderKeyKeychainItemAvailableNotification:(id)a0;
- (void)handleWalletKeySupportDidChange:(id)a0;
- (void)configureAccessories:(id)a0 withDeviceCredentialKey:(id)a1 completion:(id /* block */)a2;
- (void)requestPrimaryResident:(id)a0 toConfigureAccessories:(id)a1 withDeviceCredentialKey:(id)a2 completion:(id /* block */)a3;
- (void)configureNFCReaderKeyForAccessory:(id)a0;
- (void)fetchOrConfigureNFCReaderKeyForAccessory:(id)a0 completion:(id /* block */)a1;
- (void)fetchIsAccessoryConfiguredWithReaderKey:(id)a0 accessory:(id)a1 completion:(id /* block */)a2;
- (void)removeNfcReaderKeyWithIdentifier:(id)a0 accessory:(id)a1 completion:(id /* block */)a2;
- (void)configureAccessoryWithNfcReaderKey:(id)a0 accessory:(id)a1 completion:(id /* block */)a2;
- (void)configureNotificationsWithReason:(id)a0;
- (void)registerForNotificationsWithReason:(id)a0;
- (void)handlePendingDeviceCredentialKeysSyncForAccessory:(id)a0 withReason:(id)a1;
- (void)handlePendingDeviceCredentialKeysSyncForAccessories:(id)a0 withReason:(id)a1;
- (void)unregisterForNotificationsWithReason:(id)a0;
- (void)configureAccessories:(id)a0 withDeviceCredentialKey:(id)a1 forDeviceWithUUID:(id)a2 user:(id)a3 completion:(id /* block */)a4;
- (id)writeRequestsWithAccessories:(id)a0 home:(id)a1 deviceCredentialKey:(id)a2 user:(id)a3;
- (void)fetchWalletKeyColorWithAccessory:(id)a0;
- (id)walletKeyColorWithCharacteristicValue:(id)a0;
- (void)fetchWalletKeyColorForAccessories:(id)a0 withCompletion:(id /* block */)a1;

@end
