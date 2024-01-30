@class REFeatureTransformer, REFeatureSet, NSString;

@interface _RETransformedFeature : REFeature {
    NSString *_name;
    unsigned long long _hash;
}

@property (readonly, nonatomic) REFeatureSet *features;
@property (readonly, nonatomic) REFeatureTransformer *transformer;

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
- (id)initWithTransformer:(id)a0 features:(id)a1;
- (void)_computeHash;

@end
