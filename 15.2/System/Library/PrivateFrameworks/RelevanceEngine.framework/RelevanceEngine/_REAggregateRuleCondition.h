@class NSSet;

@interface _REAggregateRuleCondition : RECondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSSet *conditions;
@property (readonly, nonatomic) unsigned long long count;

- (id)_dependentFeatures;
- (id)_notCondition;
- (BOOL)_validForRanking;
- (id)_inflectionFeatureValuePairs;
- (id)initWithConditions:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (unsigned long long)hash;
- (BOOL)_needsProbability;
- (BOOL)_requiresTwoFeatures;
- (BOOL)_acceptsLeftFeatureMap:(id)a0 rightFeatureMap:(id)a1;

@end
