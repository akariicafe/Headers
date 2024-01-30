@class NSData, NSArray;

@interface SACardSnippet : SAUISnippet

@property (copy, nonatomic) NSData *cardData;
@property (copy, nonatomic) NSData *compactSizeCardData;
@property (copy, nonatomic) NSArray *contextItems;
@property (copy, nonatomic) NSArray *referencedCommands;
@property (copy, nonatomic) NSArray *referencedSnippets;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
