@class NSArray;

@interface SAUSSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *sections;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
