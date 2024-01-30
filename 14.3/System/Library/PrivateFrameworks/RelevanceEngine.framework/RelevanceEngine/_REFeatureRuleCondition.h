@class REFeature;

@interface _REFeatureRuleCondition : RECondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) REFeature *firstFeature;
@property (readonly, nonatomic) long long relation;
@property (readonly, nonatomic) REFeature *secondFeature;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_notCondition;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (id)_inflectionFeatureValuePairs;
- (id)_dependentFeatures;
- (id)initWithFeature:(id)a0 relation:(long long)a1 feature:(id)a2;
- (BOOL)_requiresTwoFeatures;

@end
