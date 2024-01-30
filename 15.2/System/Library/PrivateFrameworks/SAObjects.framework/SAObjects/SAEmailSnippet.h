@class NSArray;

@interface SAEmailSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *emails;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
