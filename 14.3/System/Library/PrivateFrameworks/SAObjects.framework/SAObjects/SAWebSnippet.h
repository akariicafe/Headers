@class NSArray;

@interface SAWebSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *webSearch;

+ (id)snippetWithDictionary:(id)a0 context:(id)a1;
+ (id)snippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
