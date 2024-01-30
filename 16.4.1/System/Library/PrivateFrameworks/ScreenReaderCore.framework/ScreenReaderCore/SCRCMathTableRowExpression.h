@interface SCRCMathTableRowExpression : SCRCMathArrayExpression

- (BOOL)canBeWrappedInLatexMathIndicators;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)latexDescriptionInMathMode:(BOOL)a0;
- (id)mathMLTag;

@end
