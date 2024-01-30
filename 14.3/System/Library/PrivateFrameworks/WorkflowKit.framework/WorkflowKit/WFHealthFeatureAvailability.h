@class NSObject, NSString, HKSPFeatureAvailabilityStore;
@protocol OS_dispatch_queue, WFHealthFeatureObserver;

@interface WFHealthFeatureAvailability : NSObject <HKFeatureAvailabilityProvidingObserver>

@property (retain, nonatomic) HKSPFeatureAvailabilityStore *store;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long sleepOnboardingStatus;
@property (readonly, nonatomic) NSString *onboardingCompletedKey;
@property (weak, nonatomic) id<WFHealthFeatureObserver> observer;

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (id)initWithSleepFeature:(unsigned long long)a0;
- (void)getSleepOnboardingStatus:(id /* block */)a0;

@end
