@class CNCache, ACAccountStore;

@interface CNManagedAccountsCache : NSObject

@property (retain, nonatomic) CNCache *accountsCache;
@property (retain, nonatomic) ACAccountStore *accountStore;

+ (id)sharedCache;

- (void)clearCache;
- (id)accountsForIdentifiers:(id)a0;
- (id)init;
- (id)accountForIdentifier:(id)a0;
- (void).cxx_destruct;

@end
