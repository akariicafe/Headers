@class NSArray;

@interface SAEmailSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *emails;

+ (id)snippetWithDictionary:(id)a0 context:(id)a1;
+ (id)snippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
