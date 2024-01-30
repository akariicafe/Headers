@class NSArray;

@interface SAAnswerSocialQuestion : SAAnswerAbstractSocialPost

@property (copy, nonatomic) NSArray *socialAnswers;

+ (id)socialQuestion;
+ (id)socialQuestionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
