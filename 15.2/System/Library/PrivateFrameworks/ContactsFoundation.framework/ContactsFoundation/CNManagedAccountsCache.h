@class CNCache, ACAccountStore;

@interface CNManagedAccountsCache : NSObject

@property (retain, nonatomic) CNCache *accountsCache;
@property (retain, nonatomic) ACAccountStore *accountStore;

+ (id)sharedCache;

- (void)clearCache;
- (id)accountForIdentifier:(id)a0;
- (id)accountsForIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
