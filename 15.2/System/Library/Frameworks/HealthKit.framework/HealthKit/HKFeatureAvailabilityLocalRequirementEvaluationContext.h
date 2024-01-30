@class NSMutableDictionary;

@interface HKFeatureAvailabilityLocalRequirementEvaluationContext : HKFeatureAvailabilityRequirementEvaluationDataSource

@property (nonatomic) long long _unitTest_cacheHits;
@property (retain, nonatomic) NSMutableDictionary *eligibilityByFeatureIdentifier;
@property (retain, nonatomic) NSMutableDictionary *onboardingRecordByFeatureIdentifier;

- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)onboardingRecordForFeatureWithIdentifier:(id)a0 error:(id *)a1;

@end
