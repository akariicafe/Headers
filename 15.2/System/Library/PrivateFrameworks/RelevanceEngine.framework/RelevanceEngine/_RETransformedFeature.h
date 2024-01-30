@class REFeatureTransformer, REFeatureSet, NSString;

@interface _RETransformedFeature : REFeature {
    NSString *_name;
    unsigned long long _hash;
}

@property (readonly, nonatomic) REFeatureSet *features;
@property (readonly, nonatomic) REFeatureTransformer *transformer;

- (long long)_bitCount;
- (id)_dependentFeatures;
- (void)_replaceDependentFeature:(id)a0 withFeature:(id)a1;
- (void)_computeHash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTransformer:(id)a0 features:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (unsigned long long)hash;
- (id)_rootFeatures;
- (unsigned long long)featureType;

@end
