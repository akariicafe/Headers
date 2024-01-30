@interface SCRCMathTableRowExpression : SCRCMathArrayExpression

- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)latexDescriptionInMathMode:(BOOL)a0;
- (BOOL)canBeWrappedInLatexMathIndicators;

@end
