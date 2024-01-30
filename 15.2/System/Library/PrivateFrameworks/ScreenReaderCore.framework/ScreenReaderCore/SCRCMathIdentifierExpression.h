@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression

@property (readonly, nonatomic) long long fontStyle;

- (BOOL)isNumber;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1 isPartOfWord:(BOOL)a2;
- (BOOL)isNaturalSuperscript;
- (BOOL)canFormWordStartingWithExpression:(id)a0;
- (BOOL)_isPrime;

@end
