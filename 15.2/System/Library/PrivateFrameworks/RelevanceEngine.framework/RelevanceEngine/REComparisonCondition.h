@interface REComparisonCondition : RECondition

+ (id)falseCondition;
+ (id)trueCondition;
+ (id)conditionForLeftFeature:(id)a0 relation:(long long)a1 rightFeature:(id)a2;

- (BOOL)_validForRanking;
- (id)_inflectionFeatureValuePairs;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
