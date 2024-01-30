@interface ATXCandidateRelevanceModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)modelType;
- (id)initWithCoder:(id)a0;
- (float)predictForContext:(id)a0 candidate:(id)a1 featurizationManager:(id)a2;
- (id)featureContributionsDuringInferenceDescriptionForContext:(id)a0 candidate:(id)a1 featurizationManager:(id)a2;
- (id)featureImportanceDescriptionForFeaturizationManager:(id)a0;
- (id)featureImportancesForFeaturizationManager:(id)a0;
- (id)featureContributionsDuringInferenceForContext:(id)a0 candidate:(id)a1 featurizationManager:(id)a2;
- (unsigned long long)numberOfModelWeights;
- (unsigned long long)numberOfNonZeroModelWeights;

@end
