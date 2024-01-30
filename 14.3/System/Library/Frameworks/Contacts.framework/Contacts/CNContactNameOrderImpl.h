@interface CNContactNameOrderImpl : NSObject

+ (id)defaultNewContactOrder;
+ (id)familyNameFirstOrder;
+ (id)givenNameFirstOrder;
+ (id)defaultOrder;
+ (id)defaultSortOrder;
+ (id)orderForSortOrder:(long long)a0;

- (long long)nameOrder;
- (id)sortingNameProperties;
- (id)nameProperties;
- (id)phoneticNameProperties;

@end
