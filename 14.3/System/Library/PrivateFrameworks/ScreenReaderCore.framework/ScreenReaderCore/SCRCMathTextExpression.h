@interface SCRCMathTextExpression : SCRCMathSimpleExpression

- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)latexDescriptionInMathMode:(BOOL)a0;

@end
