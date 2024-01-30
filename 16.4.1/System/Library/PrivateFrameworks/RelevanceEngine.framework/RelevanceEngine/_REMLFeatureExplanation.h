@class REFeatureSet;

@interface _REMLFeatureExplanation : REMLExplanation {
    REFeatureSet *_features;
    float _mean;
    float _variance;
}

+ (id)combinedExplanationsFromExplanations:(id)a0;

- (void).cxx_destruct;
- (BOOL)_canCombineWithSimilarExplanation:(id)a0;
- (long long)_rankExplanationToSimilarExplanation:(id)a0;
- (id)explanationByCombiningWithExplanation:(id)a0;
- (id)explanationWithStyle:(unsigned long long)a0;
- (id)initWithFeature:(id)a0 mean:(float)a1 variance:(float)a2;
- (BOOL)shouldProvideExplanation;

@end
