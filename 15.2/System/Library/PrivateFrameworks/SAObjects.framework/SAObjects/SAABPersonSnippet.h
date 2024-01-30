@class NSArray;

@interface SAABPersonSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *displayProperties;
@property (copy, nonatomic) NSArray *persons;

+ (id)personSnippet;
+ (id)personSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
