@interface SAUIConfirmSnippet : SAUISnippetInteraction

+ (id)confirmSnippet;
+ (id)confirmSnippetWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
