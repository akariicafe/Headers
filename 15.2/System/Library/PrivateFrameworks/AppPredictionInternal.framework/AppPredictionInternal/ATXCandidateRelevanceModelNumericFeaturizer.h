@interface ATXCandidateRelevanceModelNumericFeaturizer : ATXCandidateRelevanceModelFeaturizer

- (id)numericFeatureValueForContext:(id)a0 candidate:(id)a1;
- (id)immutableCopy;
- (unsigned long long)dimensions;
- (void)observeContext:(id)a0 candidate:(id)a1;
- (id)featureVectorForContext:(id)a0 candidate:(id)a1;

@end
