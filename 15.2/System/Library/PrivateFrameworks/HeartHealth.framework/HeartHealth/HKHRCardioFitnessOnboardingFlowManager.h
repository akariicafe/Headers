@class HKMobileCountryCodeManager, HKHealthStore, HKHRCardioFitnessFeatureStatusManager, NSObject, HKMobileCountryCode;
@protocol OS_dispatch_queue, HKFeatureAvailabilityProviding;

@interface HKHRCardioFitnessOnboardingFlowManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) id<HKFeatureAvailabilityProviding> featureAvailabilityStore;
@property (retain, nonatomic) HKHRCardioFitnessFeatureStatusManager *featureStatusManager;
@property (retain, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager;
@property (readonly, nonatomic) HKMobileCountryCode *countryCode;

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0 featureAvailabilityStore:(id)a1 featureStatusManager:(id)a2;
- (void)fetchUserCanContinueOnboardingAtCurrentLocationWithCompletion:(id /* block */)a0;
- (BOOL)userCanContinueOnboardingWithDateOfBirthComponents:(id)a0;
- (void)markOnboardingCompleteShouldTurnOnNotifications:(BOOL)a0 completion:(id /* block */)a1;

@end
