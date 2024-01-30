@class SSAccount, SSDatabaseCache, SSAppPurchaseHistoryDatabase;

@interface SSAppPurchaseHistoryCache : NSObject {
    SSAccount *_account;
    SSDatabaseCache *_databaseCache;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
}

- (id)initWithAccount:(id)a0;
- (unsigned long long)purge:(unsigned long long)a0;
- (unsigned long long)purgeableSpace;
- (id)allUncachedImages;
- (id)imageDataForAdamID:(id)a0;
- (id)init;
- (BOOL)setImageData:(id)a0 forAdamID:(id)a1 imageToken:(id)a2;
- (void)clearCacheForAdamID:(id)a0;
- (void).cxx_destruct;
- (id)allUncachedImages:(id)a0;

@end
