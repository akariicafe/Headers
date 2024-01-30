@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression

@property (readonly, nonatomic) unsigned short operatorChar;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (BOOL)canBeUsedWithRange;
- (BOOL)isNaturalSuperscript;
- (BOOL)isEllipsis;
- (BOOL)isTermSeparator;
- (BOOL)isOperationSymbol;
- (BOOL)isFenceDelimiter;
- (id)latexFormatStringAsOver;
- (BOOL)_isIntegral;
- (BOOL)_isUnionOrIntersection;
- (BOOL)_isSummation;
- (BOOL)_isRingOperator;
- (BOOL)_isInvisibleCharacter;
- (BOOL)_isMinusSign;

@end
