@class NSString, REFeature;

@interface _REProbabilityRuleCondition : RECondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) NSString *interaction;
@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) long long relation;
@property (readonly, nonatomic) float threshold;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_notCondition;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (id)_inflectionFeatureValuePairs;
- (id)_dependentFeatures;
- (BOOL)_needsProbability;
- (id)initWithProbability:(id)a0 relation:(long long)a1 feature:(id)a2 threshold:(float)a3;

@end
