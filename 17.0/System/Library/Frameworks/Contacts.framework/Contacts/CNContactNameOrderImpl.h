@interface CNContactNameOrderImpl : NSObject

+ (id)givenNameFirstOrder;
+ (id)familyNameFirstOrder;
+ (id)defaultNewContactOrder;
+ (id)defaultSortOrder;
+ (id)orderForSortOrder:(long long)a0;
+ (id)defaultOrder;

- (long long)nameOrder;
- (id)nameProperties;
- (id)phoneticNameProperties;
- (id)sortingNameProperties;

@end
