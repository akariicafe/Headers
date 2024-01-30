@class HKFeatureAvailabilityOnboardingEligibility, HKOnboardingCompletion;

@interface HKFeatureAvailabilityOnboardingCompletionEligibility : NSObject

@property (readonly, copy, nonatomic) HKOnboardingCompletion *onboardingCompletion;
@property (readonly, copy, nonatomic) HKFeatureAvailabilityOnboardingEligibility *onboardingEligibility;

- (void).cxx_destruct;
- (id)initWithOnboardingCompletion:(id)a0 onboardingEligibility:(id)a1;

@end
