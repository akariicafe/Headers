@class NSObject, SSLRUCache;
@protocol OS_dispatch_queue;

@interface ISURLBagCache : NSObject {
    SSLRUCache *_cachedBags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedCache;
+ (id)URLWithBagContext:(id)a0;

- (id)URLBagForContext:(id)a0 withOptions:(long long)a1;
- (void)_storeFrontChangedNotification:(id)a0;
- (void)dealloc;
- (id)URLBagForContext:(id)a0;
- (id)init;
- (void)invalidateAllURLBags;
- (void)invalidateURLBagForContext:(id)a0;
- (void)addURLBag:(id)a0;
- (void).cxx_destruct;
- (id)_newRequestWithURLBagContext:(id)a0;

@end
