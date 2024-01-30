@interface REStaticMLModel : REMLModel

+ (unsigned long long)featureBitWidth;

- (id)_predictWithFeatures:(id)a0;
- (float)_relevanceForFeatureMap:(id)a0;
- (float)_usageForFeatureSet:(id)a0;

@end
