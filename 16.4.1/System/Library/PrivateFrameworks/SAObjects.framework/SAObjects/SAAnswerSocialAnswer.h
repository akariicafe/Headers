@class NSNumber;

@interface SAAnswerSocialAnswer : SAAnswerAbstractSocialPost

@property (copy, nonatomic) NSNumber *selectedAnswer;

+ (id)socialAnswer;
+ (id)socialAnswerWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
