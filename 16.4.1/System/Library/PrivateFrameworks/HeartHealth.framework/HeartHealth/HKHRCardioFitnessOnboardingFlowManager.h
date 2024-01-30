@class HKMobileCountryCodeManager, HKHealthStore, HKHRCardioFitnessFeatureStatusManager, NSObject;
@protocol OS_dispatch_queue, HKFeatureAvailabilityProviding;

@interface HKHRCardioFitnessOnboardingFlowManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) id<HKFeatureAvailabilityProviding> featureAvailabilityStore;
@property (retain, nonatomic) HKHRCardioFitnessFeatureStatusManager *featureStatusManager;
@property (retain, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager;

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (void)fetchUserCanContinueOnboardingAtCurrentLocationWithCompletion:(id /* block */)a0;
- (id)fetchUserCanContinueOnboardingWithCountryCode:(id)a0 error:(id *)a1;
- (id)initWithHealthStore:(id)a0 featureAvailabilityStore:(id)a1 featureStatusManager:(id)a2;
- (void)markOnboardingCompleteWithCountryCode:(id)a0 countryCodeProvenance:(long long)a1 notificationEnablement:(id)a2 completion:(id /* block */)a3;
- (BOOL)userCanContinueOnboardingWithDateOfBirthComponents:(id)a0;

@end
