@class NSString, HMMediaDestinationControllerData, HMFUnfairLock, HMDMediaDestinationControllerMetricsEventDispatcher, HMMutableMediaDestinationControllerData;
@protocol HMDMediaDestinationControllerBackingStoreHandlerDelegate;

@interface HMDMediaDestinationControllerBackingStoreHandler : HMDBackingStoreHandler <HMFLogging> {
    HMMutableMediaDestinationControllerData *_data;
    HMFUnfairLock *_lock;
}

@property (weak) id<HMDMediaDestinationControllerBackingStoreHandlerDelegate> delegate;
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher;
@property (readonly, copy) HMMediaDestinationControllerData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)backingStoreObjectForData:(id)a0;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)initWithData:(id)a0 backingStore:(id)a1 metricsEventDispatcher:(id)a2 delegate:(id)a3;
- (void)updateDestinationIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateAvailableDestinationIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)removeControllerWithCompletion:(id /* block */)a0;
- (void)migrateWithHome:(id)a0 cloudZone:(id)a1 migrationQueue:(id)a2 completion:(id /* block */)a3;
- (void)recoverDueToNoRecordInCloudWithHome:(id)a0 migrationQueue:(id)a1 completion:(id /* block */)a2;
- (void)migrateWithCurrentCloudRecord:(id)a0 home:(id)a1 cloudZone:(id)a2 migrationQueue:(id)a3 completion:(id /* block */)a4;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)a0 migrationQueue:(id)a1 completion:(id /* block */)a2;
- (void)updateDestinationIdentifier:(id)a0;
- (void)updateAvailableDestinationIdentifiers:(id)a0;
- (void)notifyDidUpdateDestinationIdentifier:(id)a0;
- (void)notifyDidUpdateAvailableDestinationIdentifiers:(id)a0;
- (void)transactionObjectUpdatedDestinationIdentifier:(id)a0 message:(id)a1;
- (void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)a0 message:(id)a1;

@end
