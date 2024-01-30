@class REFeature;

@interface _REHasFeatureRuleCondition : RECondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) BOOL contains;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_notCondition;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (id)_inflectionFeatureValuePairs;
- (id)_dependentFeatures;
- (id)initWithFeature:(id)a0 contains:(BOOL)a1;

@end
