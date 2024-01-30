@class HMFUnfairLock, HMMediaDestination, HMMutableMediaDestination;
@protocol HMDMediaDestinationBackingStoreHandlerDelegate;

@interface HMDMediaDestinationBackingStoreHandler : HMDBackingStoreHandler {
    HMFUnfairLock *_lock;
    HMMutableMediaDestination *_destination;
}

@property (weak) id<HMDMediaDestinationBackingStoreHandlerDelegate> delegate;
@property (readonly) HMMediaDestination *destination;

+ (id)logCategory;
+ (id)backingStoreObjectForMediaDestination:(id)a0;

- (void).cxx_destruct;
- (void)setAudioGroupIdentifier:(id)a0;
- (void)setSupportedOptions:(unsigned long long)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)initWithDestination:(id)a0 backingStore:(id)a1 delegate:(id)a2;
- (void)updateSupportedOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateAudioGroupIdentifier:(id)a0 completion:(id /* block */)a1;

@end
