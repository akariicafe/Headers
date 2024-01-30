@interface SCRCMathSpaceExpression : SCRCMathExpression

- (id)initWithDictionary:(id)a0;
- (id)mathMLString;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (BOOL)beginsWithSpace;
- (BOOL)endsWithSpace;

@end
