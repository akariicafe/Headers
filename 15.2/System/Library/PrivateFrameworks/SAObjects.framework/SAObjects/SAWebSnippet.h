@class NSArray;

@interface SAWebSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *webSearch;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
