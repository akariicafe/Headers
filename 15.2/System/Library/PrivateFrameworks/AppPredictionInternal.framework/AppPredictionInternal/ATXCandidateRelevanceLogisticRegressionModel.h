@class PMLLogisticRegressionModel;

@interface ATXCandidateRelevanceLogisticRegressionModel : ATXCandidateRelevanceModel

@property (readonly, nonatomic) PMLLogisticRegressionModel *model;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (unsigned long long)modelType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModel:(id)a0;
- (float)predictForContext:(id)a0 candidate:(id)a1 featurizationManager:(id)a2;
- (id)featureContributionsDuringInferenceDescriptionForContext:(id)a0 candidate:(id)a1 featurizationManager:(id)a2;
- (id)featureImportanceDescriptionForFeaturizationManager:(id)a0;
- (id)featureImportancesForFeaturizationManager:(id)a0;
- (id)featureContributionsDuringInferenceForContext:(id)a0 candidate:(id)a1 featurizationManager:(id)a2;
- (unsigned long long)numberOfModelWeights;
- (unsigned long long)numberOfNonZeroModelWeights;
- (BOOL)isEqualToATXCandidateRelevanceLogisticRegressionModel:(id)a0;

@end
