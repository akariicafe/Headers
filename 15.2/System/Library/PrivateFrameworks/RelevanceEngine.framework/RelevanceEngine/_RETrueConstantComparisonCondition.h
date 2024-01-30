@interface _RETrueConstantComparisonCondition : REComparisonCondition

+ (id)sharedInstance;

- (id)_notCondition;
- (BOOL)_validForRanking;
- (id)_inflectionFeatureValuePairs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptsLeftFeatureMap:(id)a0 rightFeatureMap:(id)a1;

@end
