@interface REMLExplanation : NSObject

+ (id)explanationForCondition:(id)a0;
+ (id)explanationForFeature:(id)a0 mean:(float)a1 variance:(float)a2;
+ (id)explanationForFilteringRule:(id)a0;

- (id)_formattedNameForFeature:(id)a0 style:(unsigned long long)a1;
- (BOOL)_canCombineWithSimilarExplanation:(id)a0;
- (id)_formattedFeatureListFromFeatures:(id)a0 style:(unsigned long long)a1;
- (BOOL)_isSystemFeature:(id)a0;
- (long long)_rankExplanationToSimilarExplanation:(id)a0;
- (BOOL)canCombineExplanationWithExplanation:(id)a0;
- (id)explanationByCombiningWithExplanation:(id)a0;
- (id)explanationWithStyle:(unsigned long long)a0;
- (long long)rankExplanationToExplanation:(id)a0;
- (BOOL)shouldProvideExplanation;

@end
