@interface PGFeatureAggregationValidator : PGFeatureValidator

@property (readonly, nonatomic) long long featureExtractorType;

- (id)_composeFeatureExtractorWithGraph:(id)a0 error:(id *)a1;
- (long long)featureValidatorType;
- (id)initWithPredicate:(id)a0 featureExtractor:(id)a1 featureExtractorType:(long long)a2 featureName:(id)a3;
- (long long)isValidEntity:(id)a0 error:(id *)a1;
- (long long)isValidEntity:(id)a0 graph:(id)a1 assetFetchOptionPropertySet:(id)a2 error:(id *)a3;

@end
