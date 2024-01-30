@class NSArray;

@interface SAMicroblogSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *microblogs;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
