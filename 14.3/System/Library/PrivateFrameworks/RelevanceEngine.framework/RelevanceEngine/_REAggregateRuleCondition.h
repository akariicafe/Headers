@class NSSet;

@interface _REAggregateRuleCondition : RECondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSSet *conditions;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_notCondition;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (id)_inflectionFeatureValuePairs;
- (id)_dependentFeatures;
- (BOOL)_requiresTwoFeatures;
- (BOOL)_validForRanking;
- (BOOL)_acceptsLeftFeatureMap:(id)a0 rightFeatureMap:(id)a1;
- (BOOL)_needsProbability;
- (id)initWithConditions:(id)a0 type:(unsigned long long)a1;

@end
