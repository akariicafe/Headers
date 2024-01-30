@interface _REHashFeatureTransformer : REFeatureTransformer

+ (id)functionName;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)_outputType;
- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)_featureCount;
- (BOOL)_validateWithFeatures:(id)a0;

@end
