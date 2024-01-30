@class NSArray;

@interface ATXOneHotCategoricalFeatureCross : ATXCandidateRelevanceModelOneHotCategoricalFeaturizer {
    NSArray *_features;
}

- (id)initWithFeatures:(id)a0;
- (void).cxx_destruct;
- (id)categoricalFeatureValueForContext:(id)a0 candidate:(id)a1;

@end
