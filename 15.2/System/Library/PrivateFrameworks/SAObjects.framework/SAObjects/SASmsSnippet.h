@class NSArray;

@interface SASmsSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *smss;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
