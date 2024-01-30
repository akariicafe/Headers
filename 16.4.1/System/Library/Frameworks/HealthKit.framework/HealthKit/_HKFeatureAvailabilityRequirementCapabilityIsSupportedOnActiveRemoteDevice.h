@class NSString;

@interface _HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice : HKFeatureAvailabilityOnboardingEligibilityRequirement <HKObservableFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;

@end
