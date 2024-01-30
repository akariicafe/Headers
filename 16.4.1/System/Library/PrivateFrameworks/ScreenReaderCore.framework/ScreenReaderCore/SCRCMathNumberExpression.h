@interface SCRCMathNumberExpression : SCRCMathSimpleExpression

- (BOOL)isNumber;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;

@end
