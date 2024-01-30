@interface CNContactNameOrderImpl : NSObject

+ (id)givenNameFirstOrder;
+ (id)defaultOrder;
+ (id)familyNameFirstOrder;
+ (id)orderForSortOrder:(long long)a0;
+ (id)defaultNewContactOrder;
+ (id)defaultSortOrder;

- (id)sortingNameProperties;
- (id)nameProperties;
- (id)phoneticNameProperties;
- (long long)nameOrder;

@end
