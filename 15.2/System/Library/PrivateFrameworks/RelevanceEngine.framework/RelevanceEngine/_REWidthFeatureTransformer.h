@interface _REWidthFeatureTransformer : REFeatureTransformer {
    unsigned long long _mask;
    unsigned long long _width;
    unsigned long long _shift;
}

- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (id)initWithWidth:(unsigned long long)a0 shift:(unsigned long long)a1;
- (BOOL)_validateWithFeatures:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_featureCount;
- (unsigned long long)hash;
- (unsigned long long)_outputType;

@end
