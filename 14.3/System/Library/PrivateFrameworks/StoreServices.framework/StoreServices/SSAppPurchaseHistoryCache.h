@class SSAccount, SSDatabaseCache, SSAppPurchaseHistoryDatabase;

@interface SSAppPurchaseHistoryCache : NSObject {
    SSAccount *_account;
    SSDatabaseCache *_databaseCache;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
}

- (id)init;
- (void).cxx_destruct;
- (id)imageDataForAdamID:(id)a0;
- (id)allUncachedImages;
- (unsigned long long)purgeableSpace;
- (id)allUncachedImages:(id)a0;
- (id)initWithAccount:(id)a0;
- (void)clearCacheForAdamID:(id)a0;
- (BOOL)setImageData:(id)a0 forAdamID:(id)a1 imageToken:(id)a2;
- (unsigned long long)purge:(unsigned long long)a0;

@end
