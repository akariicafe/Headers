@class NSDate;

@interface _REChangeFeatureTransformer : REFeatureTransformer {
    double _interval;
    NSDate *_lastChangeDate;
}

@property (nonatomic) unsigned long long value;

+ (id)functionName;
+ (BOOL)supportsInvalidation;

- (long long)_bitCount;
- (void)configureWithInvocation:(id)a0;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (BOOL)_validateWithFeatures:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_featureCount;
- (unsigned long long)hash;
- (void)dealloc;
- (unsigned long long)_outputType;
- (void)_updateConfigurationForInterval:(double)a0;

@end
