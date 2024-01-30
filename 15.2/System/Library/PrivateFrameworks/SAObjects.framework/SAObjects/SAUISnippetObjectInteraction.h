@class SADomainObject;

@interface SAUISnippetObjectInteraction : SAUISnippetInteraction

@property (retain, nonatomic) SADomainObject *object;

+ (id)snippetObjectInteraction;
+ (id)snippetObjectInteractionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
