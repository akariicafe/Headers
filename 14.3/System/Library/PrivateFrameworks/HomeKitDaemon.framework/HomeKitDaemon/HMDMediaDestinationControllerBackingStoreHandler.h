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

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdatedDestinationIdentifier:(id)a0 message:(id)a1;
- (void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)a0 message:(id)a1;
- (void)updateDestinationIdentifier:(id)a0;
- (void)notifyDidUpdateDestinationIdentifier:(id)a0;
- (void)updateAvailableDestinationIdentifiers:(id)a0;
- (void)notifyDidUpdateAvailableDestinationIdentifiers:(id)a0;
- (id)initWithData:(id)a0 backingStore:(id)a1 metricsEventDispatcher:(id)a2 delegate:(id)a3;
- (void)updateDestinationIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateAvailableDestinationIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)removeControllerWithCompletion:(id /* block */)a0;

@end
