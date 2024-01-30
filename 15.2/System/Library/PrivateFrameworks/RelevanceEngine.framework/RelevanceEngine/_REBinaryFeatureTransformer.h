@interface _REBinaryFeatureTransformer : REFeatureTransformer

@property (nonatomic) unsigned long long threshold;

+ (id)functionName;

- (long long)_bitCount;
- (void)configureWithInvocation:(id)a0;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (BOOL)_validateWithFeatures:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)_featureCount;
- (unsigned long long)hash;
- (void)dealloc;
- (unsigned long long)_outputType;

@end
