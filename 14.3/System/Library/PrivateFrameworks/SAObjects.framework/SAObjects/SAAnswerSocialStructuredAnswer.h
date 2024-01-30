@class NSString, NSArray;

@interface SAAnswerSocialStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSArray *socialQuestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)socialStructuredAnswer;
+ (id)socialStructuredAnswerWithDictionary:(id)a0 context:(id)a1;

@end
