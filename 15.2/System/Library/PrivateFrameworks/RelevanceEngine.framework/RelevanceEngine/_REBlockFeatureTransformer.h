@interface _REBlockFeatureTransformer : REFeatureTransformer {
    unsigned long long _featureCount;
    unsigned long long _outputFeatureType;
    id /* block */ _block;
}

- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (id)initWithFeatureCount:(unsigned long long)a0 outputFeatureType:(unsigned long long)a1 transformation:(id /* block */)a2;
- (BOOL)_validateWithFeatures:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_featureCount;
- (unsigned long long)hash;
- (unsigned long long)_outputType;

@end
