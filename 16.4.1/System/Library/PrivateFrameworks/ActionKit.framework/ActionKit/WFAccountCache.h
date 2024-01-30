@class NSCache;

@interface WFAccountCache : NSObject

@property (readonly, nonatomic) NSCache *cache;

- (id)accountsForService:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setNumberOfAccounts:(id)a0 forService:(id)a1;
- (void)clearCacheForService:(id)a0;
- (id)numberOfAccountsForService:(id)a0;
- (void)setAccounts:(id)a0 forService:(id)a1;

@end
