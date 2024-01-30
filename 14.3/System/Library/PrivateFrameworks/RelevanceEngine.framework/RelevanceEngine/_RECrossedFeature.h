@class NSArray, NSString, REFeatureSet;

@interface _RECrossedFeature : REFeature {
    NSString *_name;
    unsigned long long _featureType;
    unsigned long long _bitCount;
    REFeatureSet *_dependentFeatures;
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSArray *features;

- (id)initWithFeatures:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (unsigned long long)featureType;
- (long long)_bitCount;
- (id)_rootFeatures;
- (id)_dependentFeatures;
- (void)_replaceDependentFeature:(id)a0 withFeature:(id)a1;
- (void)_computeHash;
- (void)_updateFeaturesArray;

@end
