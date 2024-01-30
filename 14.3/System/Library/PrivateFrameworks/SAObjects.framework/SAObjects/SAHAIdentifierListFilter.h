@class NSArray;

@interface SAHAIdentifierListFilter : SAHAFilter

@property (copy, nonatomic) NSArray *identifiers;

+ (id)identifierListFilter;
+ (id)identifierListFilterWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
