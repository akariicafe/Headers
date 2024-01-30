@class NSMutableDictionary;

@interface ATXCandidateRelevanceModelMultiHotCategoricalFeaturizer : ATXCandidateRelevanceModelFeaturizer {
    NSMutableDictionary *_observedFeatureValueCounts;
    unsigned long long _maxCategoricalFeaturesCount;
}

- (id)categoricalFeatureValuesForContext:(id)a0 candidate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)immutableCopy;
- (void)observeContext:(id)a0 candidate:(id)a1;
- (id)featureVectorForContext:(id)a0 candidate:(id)a1;
- (id)initWithObservedFeatureValueCounts:(id)a0;
- (id)initWithObservedFeatureValueCounts:(id)a0 maxCategoricalFeaturesCount:(unsigned long long)a1;
- (id)computeFeatureValueNames;

@end
