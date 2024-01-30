@class NSArray;

@interface SAUSSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *sections;

+ (id)snippetWithDictionary:(id)a0 context:(id)a1;
+ (id)snippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
