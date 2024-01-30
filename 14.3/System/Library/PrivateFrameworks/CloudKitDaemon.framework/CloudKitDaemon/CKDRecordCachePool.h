@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDRecordCachePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *pools;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordExpiryQueue;

+ (id)sharedPool;
+ (void)performWithClientContext:(id)a0 scope:(long long)a1 block:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (id)acquireCacheWithContext:(id)a0 scope:(long long)a1;
- (void)releaseCache:(id)a0;
- (void)_purgeRecordCachesForApplicationContainerPaths:(id)a0 expiryDate:(id)a1;
- (id)_poolForContext:(id)a0;

@end
