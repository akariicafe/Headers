@class SAUIAppPunchOut, NSArray;

@interface SAAnswerDomainObjectSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *answerPunchOut;
@property (copy, nonatomic) NSArray *answers;

+ (id)domainObjectSnippet;
+ (id)domainObjectSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
