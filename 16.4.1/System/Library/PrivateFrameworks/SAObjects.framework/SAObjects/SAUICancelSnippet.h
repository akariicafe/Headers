@interface SAUICancelSnippet : SAUISnippetInteraction

+ (id)cancelSnippet;
+ (id)cancelSnippetWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
