@interface _REBinaryFeatureTransformer : REFeatureTransformer

@property (nonatomic) unsigned long long threshold;

+ (id)functionName;

- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_outputType;
- (void)configureWithInvocation:(id)a0;
- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (BOOL)_validateWithFeatures:(id)a0;

@end
