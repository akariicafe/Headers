@interface REStaticMLModel : REMLModel

+ (unsigned long long)featureBitWidth;

- (float)_relevanceForFeatureMap:(id)a0;
- (float)_usageForFeatureSet:(id)a0;
- (id)_predictWithFeatures:(id)a0;

@end
