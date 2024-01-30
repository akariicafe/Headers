@class NSArray;

@interface SAMPSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *items;

+ (id)snippetWithDictionary:(id)a0 context:(id)a1;
+ (id)snippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
