@class NSDate;

@interface _REChangeFeatureTransformer : REFeatureTransformer {
    double _interval;
    NSDate *_lastChangeDate;
}

@property (nonatomic) unsigned long long value;

+ (id)functionName;
+ (BOOL)supportsInvalidation;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_outputType;
- (void)configureWithInvocation:(id)a0;
- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (BOOL)_validateWithFeatures:(id)a0;
- (void)_updateConfigurationForInterval:(double)a0;

@end
