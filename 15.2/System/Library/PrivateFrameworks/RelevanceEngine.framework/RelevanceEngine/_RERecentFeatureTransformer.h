@class REFeatureValueCounter;

@interface _RERecentFeatureTransformer : REFeatureTransformer {
    REFeatureValueCounter *_counter;
    unsigned long long _bitCount;
}

+ (id)functionName;
+ (BOOL)supportsInvalidation;
+ (BOOL)supportsPersistence;

- (long long)_bitCount;
- (void)configureWithInvocation:(id)a0;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (BOOL)_validateWithFeatures:(id)a0;
- (void)_updateConfigurationForCount:(unsigned long long)a0;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_featureCount;
- (unsigned long long)hash;
- (unsigned long long)_outputType;

@end
