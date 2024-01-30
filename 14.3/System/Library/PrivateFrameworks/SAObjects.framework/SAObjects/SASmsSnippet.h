@class NSArray;

@interface SASmsSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *smss;

+ (id)snippetWithDictionary:(id)a0 context:(id)a1;
+ (id)snippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
