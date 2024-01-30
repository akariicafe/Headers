@class NSString, HKMobileCountryCodeManager, HKHealthStore, HKHRCardioFitnessFeatureStatusManager, NSObject;
@protocol OS_dispatch_queue, HKFeatureAvailabilityProviding;

@interface HKHRCardioFitnessOnboardingFlowManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) id<HKFeatureAvailabilityProviding> featureAvailabilityStore;
@property (retain, nonatomic) HKHRCardioFitnessFeatureStatusManager *featureStatusManager;
@property (retain, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager;
@property (readonly, nonatomic) NSString *countryCode;

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0;
- (id)initWithHealthStore:(id)a0 featureAvailabilityStore:(id)a1 featureStatusManager:(id)a2;
- (void)fetchUserCanContinueOnboardingAtCurrentLocationWithCompletion:(id /* block */)a0;
- (BOOL)userCanContinueOnboardingWithDateOfBirthComponents:(id)a0;
- (void)markOnboardingCompleteShouldTurnOnNotifications:(BOOL)a0 completion:(id /* block */)a1;

@end
