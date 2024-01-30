@class NSString;

@interface HKFeatureAvailabilityRequirementCountryIsSupportedOnLocalDevice : HKFeatureAvailabilityOnboardingEligibilityRequirement <HKFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;

@end
