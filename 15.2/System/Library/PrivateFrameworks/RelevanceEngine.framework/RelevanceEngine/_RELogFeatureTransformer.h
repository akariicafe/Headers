@interface _RELogFeatureTransformer : REFeatureTransformer {
    double _base;
    unsigned long long _type;
}

- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (BOOL)_validateWithFeatures:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_featureCount;
- (unsigned long long)hash;
- (unsigned long long)_outputType;
- (id)initWithBase:(id)a0;

@end
