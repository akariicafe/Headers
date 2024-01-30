@class NSString;

@interface SAUISnippetAttributeOpened : SAUISnippetInteraction

@property (copy, nonatomic) NSString *attributeName;
@property (copy, nonatomic) NSString *attributeValue;

+ (id)snippetAttributeOpened;
+ (id)snippetAttributeOpenedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
