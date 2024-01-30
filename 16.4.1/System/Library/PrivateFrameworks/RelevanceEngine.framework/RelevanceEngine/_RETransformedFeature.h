@class REFeatureTransformer, REFeatureSet, NSString;

@interface _RETransformedFeature : REFeature {
    NSString *_name;
    unsigned long long _hash;
}

@property (readonly, nonatomic) REFeatureSet *features;
@property (readonly, nonatomic) REFeatureTransformer *transformer;

- (unsigned long long)featureType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)name;
- (long long)_bitCount;
- (void)_computeHash;
- (id)_dependentFeatures;
- (void)_replaceDependentFeature:(id)a0 withFeature:(id)a1;
- (id)_rootFeatures;
- (id)initWithTransformer:(id)a0 features:(id)a1;

@end
