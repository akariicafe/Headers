@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, HKFeatureAvailabilityHealthDataSource;

@interface HKFeatureAvailabilityProvidingDataSource : HKObserverBridge

@property (readonly, weak, nonatomic) id<HKFeatureAvailabilityHealthDataSource> healthDataSource;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSMutableDictionary *featureAvailabilityProvidingByFeatureIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observationQueue;

- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (id)featureAvailabilityProvidingForFeatureIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)initWithHealthDataSource:(id)a0;

@end
