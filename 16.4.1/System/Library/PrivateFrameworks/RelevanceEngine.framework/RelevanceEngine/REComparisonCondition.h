@interface REComparisonCondition : RECondition

+ (id)falseCondition;
+ (id)trueCondition;
+ (id)conditionForLeftFeature:(id)a0 relation:(long long)a1 rightFeature:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_inflectionFeatureValuePairs;
- (BOOL)_validForRanking;

@end
