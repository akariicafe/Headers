@class SAUIAppPunchOut, NSArray;

@interface SAAnswerSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *answerPunchOut;
@property (copy, nonatomic) NSArray *answers;

+ (id)snippetWithDictionary:(id)a0 context:(id)a1;
+ (id)snippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
