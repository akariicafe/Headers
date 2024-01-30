@class NSString, HKObserverSet, HKHealthStore, HKKeyValueDomain, HKFeatureAvailabilityStore, NSObject, HKQuantity, HKMenstrualCyclesStore;
@protocol OS_dispatch_queue;

@interface HKMCOnboardingManager : NSObject <HKFeatureAvailabilityProvidingObserver> {
    HKHealthStore *_healthStore;
    HKObserverSet *_observers;
    HKMenstrualCyclesStore *_menstrualCyclesStore;
    HKKeyValueDomain *_keyValueDomain;
    HKFeatureAvailabilityStore *_featureAvailabilityStore;
    HKFeatureAvailabilityStore *_heartRateInputFeatureAvailabilityStore;
    HKFeatureAvailabilityStore *_deviationsFeatureAvailabilityStore;
    HKFeatureAvailabilityStore *_wristTemperatureInputFeatureAvailabilityStore;
    NSObject<OS_dispatch_queue> *_observerQueue;
}

@property (readonly, nonatomic) HKQuantity *userEnteredCycleLength;
@property (readonly, nonatomic) HKQuantity *userEnteredPeriodLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0 queue:(id)a1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0 queue:(id)a1;
- (BOOL)isAnyOnboardingVersionCompleted;
- (BOOL)_resetOnboardingCharacteristicsWithError:(id *)a0;
- (BOOL)_resetOnboardingKeyValueDomainWithError:(id *)a0;
- (void)_saveUserEnteredCycleLength:(id)a0 userEnteredPeriodLength:(id)a1 userEnteredLastPeriodStartDay:(id)a2 addedCycleFactors:(id)a3 deletedCycleFactors:(id)a4 completion:(id /* block */)a5;
- (void)_setCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (BOOL)_setLegacyOnboardingCompletedVersion:(long long)a0 error:(id *)a1;
- (void)_triggerHealthKitSync;
- (void)isAnyOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)resetOnboarding:(id /* block */)a0;
- (void)setOnboardingCompletedWithInfo:(id)a0 completion:(id /* block */)a1;

@end
