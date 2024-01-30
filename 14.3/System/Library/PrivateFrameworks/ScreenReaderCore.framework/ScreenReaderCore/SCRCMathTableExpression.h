@interface SCRCMathTableExpression : SCRCMathArrayExpression

- (unsigned long long)_numberOfColumns;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (unsigned long long)numberOfTables;
- (id)latexDescriptionInMathMode:(BOOL)a0;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1 openOperator:(id)a2 openOperatorTreePosition:(id)a3 closeOperator:(id)a4 closeOperatorTreePosition:(id)a5;
- (BOOL)isMultiRowTable;
- (BOOL)canBeWrappedInLatexMathIndicators;

@end
