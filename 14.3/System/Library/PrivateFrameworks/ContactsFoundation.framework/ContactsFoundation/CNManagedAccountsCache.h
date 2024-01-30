@class CNCache, ACAccountStore;

@interface CNManagedAccountsCache : NSObject

@property (retain, nonatomic) CNCache *accountsCache;
@property (retain, nonatomic) ACAccountStore *accountStore;

+ (id)sharedCache;

- (void)clearCache;
- (id)init;
- (void).cxx_destruct;
- (id)accountsForIdentifiers:(id)a0;
- (id)accountForIdentifier:(id)a0;

@end
