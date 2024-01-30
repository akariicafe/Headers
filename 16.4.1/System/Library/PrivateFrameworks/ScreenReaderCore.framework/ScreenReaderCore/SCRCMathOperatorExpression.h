@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression

@property (readonly, nonatomic) unsigned short operatorChar;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)mathMLString;
- (BOOL)_isRingOperator;
- (BOOL)isTermSeparator;
- (BOOL)_isIntegral;
- (BOOL)_isInvisibleCharacter;
- (BOOL)_isMinusSign;
- (BOOL)_isSummation;
- (BOOL)_isUnionOrIntersection;
- (BOOL)canBeUsedWithRange;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (BOOL)isEllipsis;
- (BOOL)isFenceDelimiter;
- (BOOL)isNaturalSuperscript;
- (BOOL)isOperationSymbol;
- (id)latexFormatStringAsOver;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;

@end
