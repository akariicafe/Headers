@class NSMutableDictionary;

@interface ATXCandidateRelevanceModelMultiHotCategoricalFeaturizer : ATXCandidateRelevanceModelFeaturizer {
    NSMutableDictionary *_observedFeatureValueCounts;
    unsigned long long _maxCategoricalFeaturesCount;
}

- (id)immutableCopy;
- (id)categoricalFeatureValuesForContext:(id)a0 candidate:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithObservedFeatureValueCounts:(id)a0 maxCategoricalFeaturesCount:(unsigned long long)a1;
- (id)computeFeatureValueNames;
- (id)featureVectorForContext:(id)a0 candidate:(id)a1;
- (id)initWithObservedFeatureValueCounts:(id)a0;
- (void)observeContext:(id)a0 candidate:(id)a1;

@end
