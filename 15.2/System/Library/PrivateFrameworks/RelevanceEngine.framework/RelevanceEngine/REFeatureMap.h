@class NSSet, NSArray, NSDictionary;

@interface REFeatureMap : NSObject <MLFeatureProvider, _REFeatureMapLoggingProperties, NSCopying> {
    unsigned long long _hash;
    unsigned long long *_values;
    NSDictionary *_indices;
}

@property (readonly, nonatomic) unsigned long long featureCount;
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) NSSet *allFeatures;
@property (readonly, nonatomic) NSArray *loggingValues;

+ (id)defaultFeatureName;

- (unsigned long long)valueForFeature:(id)a0;
- (void)enumerateBoolFeaturesUsingBlock:(id /* block */)a0;
- (void)enumerateDoubleFeaturesUsingBlock:(id /* block */)a0;
- (BOOL)hasValueForFeature:(id)a0;
- (id)featureValueForName:(id)a0;
- (void)enumerateEmptyFeaturesUsingBlock:(id /* block */)a0;
- (id)initWithFeatureMap:(id)a0;
- (void)removeAllValues;
- (id)description;
- (void)enumerateFeaturesUsingBlock:(id /* block */)a0;
- (void)removeValueForFeature:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)enumerateStringFeaturesUsingBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateInt64FeaturesUsingIndexedBlock:(id /* block */)a0 emptyFeatureBlock:(id /* block */)a1;
- (void)setFeatureValue:(id)a0 forFeature:(id)a1;
- (id)featureValueForFeature:(id)a0;
- (unsigned long long)_count;
- (unsigned long long)hash;
- (void)dealloc;
- (void)enumerateFeatureValuesUsingBlock:(id /* block */)a0;
- (void)setValue:(unsigned long long)a0 forFeature:(id)a1;
- (void)enumerateInt64FeaturesUsingBlock:(id /* block */)a0;

@end
