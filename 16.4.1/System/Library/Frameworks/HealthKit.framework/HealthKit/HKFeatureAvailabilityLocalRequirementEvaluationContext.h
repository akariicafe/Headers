@class NSMutableDictionary;

@interface HKFeatureAvailabilityLocalRequirementEvaluationContext : HKFeatureAvailabilityRequirementEvaluationDataSource

@property (nonatomic) long long _unitTest_cacheHits;
@property (retain, nonatomic) NSMutableDictionary *eligibilityByFeatureIdentifier;
@property (retain, nonatomic) NSMutableDictionary *onboardingRecordByFeatureIdentifier;
@property (retain, nonatomic) NSMutableDictionary *watchAppInstallationStateByBundleIdentifier;
@property (retain, nonatomic) NSMutableDictionary *featureStatusByIdentifierAndContext;

- (id)featureStatusForFeatureWithIdentifier:(id)a0 context:(id)a1 error:(id *)a2;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)onboardingRecordForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)isWatchAppInstalledWithBundleIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
