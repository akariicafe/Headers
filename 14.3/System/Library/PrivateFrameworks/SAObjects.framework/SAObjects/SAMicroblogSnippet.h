@class NSArray;

@interface SAMicroblogSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *microblogs;

+ (id)snippetWithDictionary:(id)a0 context:(id)a1;
+ (id)snippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
