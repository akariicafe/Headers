@class SCRCMathExpression;

@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression

@property (retain, nonatomic) SCRCMathExpression *divisor;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;

@end
