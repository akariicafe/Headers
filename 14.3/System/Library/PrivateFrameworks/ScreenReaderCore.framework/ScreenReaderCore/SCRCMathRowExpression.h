@interface SCRCMathRowExpression : SCRCMathArrayExpression

- (long long)integerValue;
- (BOOL)isInteger;
- (BOOL)isNumber;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 parentTreePosition:(id)a2 childIndex:(unsigned long long *)a3;
- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)latexDescriptionInMathMode:(BOOL)a0;
- (unsigned long long)fractionLevel;
- (id)speakableSummary;
- (BOOL)canBeUsedWithRange;
- (BOOL)canBeUsedWithBase;
- (BOOL)isFunctionName;
- (BOOL)isWordOrAbbreviation;
- (BOOL)beginsWithSpace;
- (BOOL)endsWithSpace;
- (id)_indexesOfCharactersInWords;
- (void)_addSpacingAndChild:(id)a0 toResult:(id)a1 nextChild:(id)a2 previousChild:(id)a3 numberOfOuterRadicals:(unsigned long long)a4 treePosition:(id)a5;

@end
