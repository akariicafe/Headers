@interface CNContactNameOrderImpl : NSObject

+ (id)familyNameFirstOrder;
+ (id)givenNameFirstOrder;
+ (id)defaultNewContactOrder;
+ (id)defaultOrder;
+ (id)orderForSortOrder:(long long)a0;
+ (id)defaultSortOrder;

- (id)sortingNameProperties;
- (id)nameProperties;
- (long long)nameOrder;
- (id)phoneticNameProperties;

@end
