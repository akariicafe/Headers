@class NSString, REFeature;

@interface _REProbabilityRuleCondition : RECondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) NSString *interaction;
@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) long long relation;
@property (readonly, nonatomic) float threshold;

- (id)_dependentFeatures;
- (id)_notCondition;
- (id)_inflectionFeatureValuePairs;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (unsigned long long)hash;
- (BOOL)_needsProbability;
- (id)initWithProbability:(id)a0 relation:(long long)a1 feature:(id)a2 threshold:(float)a3;

@end
