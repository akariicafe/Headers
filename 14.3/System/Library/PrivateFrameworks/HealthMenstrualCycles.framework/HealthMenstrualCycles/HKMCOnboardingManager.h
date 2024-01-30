@class HKQuantity, HKKeyValueDomain, HKHealthStore, HKFeatureAvailabilityStore, NSDate, NSNumber, HKMenstrualCyclesStore;

@interface HKMCOnboardingManager : NSObject {
    HKHealthStore *_healthStore;
    HKMenstrualCyclesStore *_menstrualCyclesStore;
    HKKeyValueDomain *_keyValueDomain;
    HKFeatureAvailabilityStore *_featureAvailabilityStore;
}

@property (readonly, copy, nonatomic) NSNumber *mostRecentOnboardingVersionCompleted;
@property (readonly, copy, nonatomic) NSDate *onboardingFirstCompletedDate;
@property (readonly, nonatomic) HKQuantity *userEnteredCycleLength;
@property (readonly, nonatomic) HKQuantity *userEnteredPeriodLength;

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0;
- (BOOL)isOnboardingVersionCompleted:(long long)a0;
- (BOOL)_setKeyValueDomainOnboardingCompletedVersion:(long long)a0 error:(id *)a1;
- (void)_saveUserEnteredCycleLength:(id)a0 userEnteredPeriodLength:(id)a1 userEnteredLastPeriodStartDay:(id)a2 addedCycleFactors:(id)a3 deletedCycleFactors:(id)a4 completion:(id /* block */)a5;
- (BOOL)_resetOnboardingKeyValueDomainWithError:(id *)a0;
- (BOOL)_resetOnboardingCharacteristicsWithError:(id *)a0;
- (void)_triggerHealthKitSync;
- (BOOL)isCurrentOnboardingVersionCompleted;
- (BOOL)isAnyOnboardingVersionCompleted;
- (void)setOnboardingCompletedWithUserEnteredCycleLength:(id)a0 userEnteredPeriodLength:(id)a1 userEnteredLastPeriodStartDay:(id)a2 addedCycleFactors:(id)a3 deletedCycleFactors:(id)a4 completion:(id /* block */)a5;
- (void)setCycleFactorsOnboardingCompletedWithAddedCycleFactors:(id)a0 deletedCycleFactors:(id)a1 completion:(id /* block */)a2;
- (void)resetOnboarding:(id /* block */)a0;
- (void)resetCycleFactorsOnboarding:(id /* block */)a0;

@end
