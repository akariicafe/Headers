@class NSArray, NSString, REFeatureSet;

@interface _RECrossedFeature : REFeature {
    NSString *_name;
    unsigned long long _featureType;
    unsigned long long _bitCount;
    REFeatureSet *_dependentFeatures;
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSArray *features;

- (long long)_bitCount;
- (void)_updateFeaturesArray;
- (id)_dependentFeatures;
- (id)initWithFeatures:(id)a0;
- (void)_replaceDependentFeature:(id)a0 withFeature:(id)a1;
- (void)_computeHash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (unsigned long long)hash;
- (id)_rootFeatures;
- (unsigned long long)featureType;

@end
