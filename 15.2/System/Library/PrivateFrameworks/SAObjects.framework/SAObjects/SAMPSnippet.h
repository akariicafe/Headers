@class NSArray;

@interface SAMPSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *items;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
