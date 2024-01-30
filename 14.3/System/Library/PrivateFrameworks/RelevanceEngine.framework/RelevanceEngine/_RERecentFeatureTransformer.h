@class REFeatureValueCounter;

@interface _RERecentFeatureTransformer : REFeatureTransformer {
    REFeatureValueCounter *_counter;
    unsigned long long _bitCount;
}

+ (id)functionName;
+ (BOOL)supportsInvalidation;
+ (BOOL)supportsPersistence;

- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_outputType;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;
- (void)_updateConfigurationForCount:(unsigned long long)a0;
- (void)configureWithInvocation:(id)a0;
- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (BOOL)_validateWithFeatures:(id)a0;

@end
