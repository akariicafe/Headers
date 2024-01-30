@interface _RERoundFeatureTransformer : REFeatureTransformer

+ (id)functionName;

- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (BOOL)_validateWithFeatures:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)_featureCount;
- (unsigned long long)hash;
- (unsigned long long)_outputType;

@end
