@class HMMutableMediaDestination, HMDMediaDestinationManagerMetricsDispatcher, HMMediaDestination;
@protocol HMDMediaDestinationBackingStoreHandlerDelegate;

@interface HMDMediaDestinationBackingStoreHandler : HMDBackingStoreHandler {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMMutableMediaDestination *_destination;
}

@property (weak) id<HMDMediaDestinationBackingStoreHandlerDelegate> delegate;
@property (readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher;
@property (readonly) HMMediaDestination *destination;

+ (id)logCategory;
+ (id)backingStoreObjectForMediaDestination:(id)a0;

- (void).cxx_destruct;
- (void)setSupportedOptions:(unsigned long long)a0;
- (void)setAudioGroupIdentifier:(id)a0;
- (id)initWithDestination:(id)a0 backingStore:(id)a1 metricsDispatcher:(id)a2 delegate:(id)a3;
- (void)mergeDestination:(id)a0;
- (void)migrateWithCurrentCloudRecord:(id)a0 home:(id)a1 cloudZone:(id)a2 migrationQueue:(id)a3 completion:(id /* block */)a4;
- (void)migrateWithHome:(id)a0 cloudZone:(id)a1 migrationQueue:(id)a2 completion:(id /* block */)a3;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)a0 migrationQueue:(id)a1 completion:(id /* block */)a2;
- (void)recoverDueToNoRecordInCloudWithHome:(id)a0 migrationQueue:(id)a1 completion:(id /* block */)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)updateAudioGroupIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateSupportedOptions:(unsigned long long)a0 completion:(id /* block */)a1;

@end
