@class NSNumber, NSString, HKObserverSet, HKHealthStore, HKKeyValueDomain, HKFeatureAvailabilityStore, NSObject, HKQuantity, HKMenstrualCyclesStore;
@protocol OS_dispatch_queue;

@interface HKMCOnboardingManager : NSObject <HKFeatureAvailabilityProvidingObserver> {
    HKHealthStore *_healthStore;
    HKObserverSet *_observers;
    HKMenstrualCyclesStore *_menstrualCyclesStore;
    HKKeyValueDomain *_keyValueDomain;
    HKFeatureAvailabilityStore *_featureAvailabilityStore;
    NSObject<OS_dispatch_queue> *_observerQueue;
}

@property (readonly, copy, nonatomic) NSNumber *highestOnboardingVersionCompleted;
@property (readonly, nonatomic) HKQuantity *userEnteredCycleLength;
@property (readonly, nonatomic) HKQuantity *userEnteredPeriodLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (void)_saveUserEnteredCycleLength:(id)a0 userEnteredPeriodLength:(id)a1 userEnteredLastPeriodStartDay:(id)a2 addedCycleFactors:(id)a3 deletedCycleFactors:(id)a4 completion:(id /* block */)a5;
- (void)addObserver:(id)a0 queue:(id)a1;
- (BOOL)_setLegacyOnboardingCompletedVersion:(long long)a0 error:(id *)a1;
- (BOOL)isAnyOnboardingVersionCompleted;
- (void)setCycleFactorsUpgradeOnboardingCompletedWithAddedCycleFactors:(id)a0 deletedCycleFactors:(id)a1 completion:(id /* block */)a2;
- (void)removeObserver:(id)a0;
- (BOOL)isCurrentOnboardingVersionCompleted;
- (void)_setCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (BOOL)isOnboardingCompletedForVersion:(long long)a0;
- (void)resetOnboarding:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0 queue:(id)a1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (BOOL)_resetOnboardingCharacteristicsWithError:(id *)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (BOOL)_resetOnboardingKeyValueDomainWithError:(id *)a0;
- (void)resetCycleFactorsOnboarding:(id /* block */)a0;
- (void)_triggerHealthKitSync;
- (void)setOnboardingCompletedWithUserEnteredCycleLength:(id)a0 userEnteredPeriodLength:(id)a1 userEnteredLastPeriodStartDay:(id)a2 addedCycleFactors:(id)a3 deletedCycleFactors:(id)a4 completion:(id /* block */)a5;

@end
