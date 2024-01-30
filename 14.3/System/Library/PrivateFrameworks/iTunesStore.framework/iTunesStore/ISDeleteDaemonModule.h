@class SSAppPurchaseHistoryCache;

@interface ISDeleteDaemonModule : NSObject {
    SSAppPurchaseHistoryCache *__purchaseHistoryCache;
}

- (void).cxx_destruct;
- (unsigned long long)purgeableSpace;
- (unsigned long long)purge:(unsigned long long)a0;
- (id)_purchaseHistoryCache;

@end
