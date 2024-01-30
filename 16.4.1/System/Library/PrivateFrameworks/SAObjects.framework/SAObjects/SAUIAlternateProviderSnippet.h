@class NSArray;

@interface SAUIAlternateProviderSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *alternateProviderResults;

+ (id)alternateProviderSnippetWithDictionary:(id)a0 context:(id)a1;
+ (id)alternateProviderSnippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
