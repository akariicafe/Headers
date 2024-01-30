@class NSArray;

@interface SAHAIdentifierListFilter : SAHAFilter

@property (copy, nonatomic) NSArray *identifiers;

+ (id)identifierListFilter;
+ (id)identifierListFilterWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
