@class NSDate;

@interface _REChangeFeatureTransformer : REFeatureTransformer {
    double _interval;
    NSDate *_lastChangeDate;
}

@property (nonatomic) unsigned long long value;

+ (id)functionName;
+ (BOOL)supportsInvalidation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_outputType;
- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)_featureCount;
- (void)_updateConfigurationForInterval:(double)a0;
- (BOOL)_validateWithFeatures:(id)a0;
- (void)configureWithInvocation:(id)a0;

@end
