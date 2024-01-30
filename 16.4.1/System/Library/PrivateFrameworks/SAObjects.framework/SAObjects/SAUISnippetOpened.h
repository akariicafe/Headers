@interface SAUISnippetOpened : SAUISnippetObjectInteraction

+ (id)snippetOpened;
+ (id)snippetOpenedWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
