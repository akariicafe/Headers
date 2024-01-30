@class NSString;

@interface SAUISnippetAttributeOpened : SAUISnippetInteraction

@property (copy, nonatomic) NSString *attributeName;
@property (copy, nonatomic) NSString *attributeValue;

+ (id)snippetAttributeOpened;
+ (id)snippetAttributeOpenedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
