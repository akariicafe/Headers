@interface SCRCMathRowExpression : SCRCMathArrayExpression

- (long long)integerValue;
- (BOOL)isInteger;
- (BOOL)isNumber;
- (void)_addSpacingAndChild:(id)a0 toResult:(id)a1 nextChild:(id)a2 previousChild:(id)a3 numberOfOuterRadicals:(unsigned long long)a4 treePosition:(id)a5;
- (BOOL)beginsWithSpace;
- (id)_indexesOfCharactersInWords;
- (BOOL)canBeUsedWithBase;
- (BOOL)canBeUsedWithRange;
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 parentTreePosition:(id)a2 childIndex:(unsigned long long *)a3;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (BOOL)endsWithSpace;
- (unsigned long long)fractionLevel;
- (BOOL)isFunctionName;
- (BOOL)isWordOrAbbreviation;
- (id)latexDescriptionInMathMode:(BOOL)a0;
- (id)mathMLTag;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableSummary;

@end
