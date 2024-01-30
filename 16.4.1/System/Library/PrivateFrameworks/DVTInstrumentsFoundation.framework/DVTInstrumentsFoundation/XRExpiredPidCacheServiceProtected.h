@class _XRExpiredPidCache, NSObject;
@protocol OS_dispatch_queue;

@interface XRExpiredPidCacheServiceProtected : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQ;
    _XRExpiredPidCache *_cache;
}

- (id)init;
- (void).cxx_destruct;
- (void)_performOnCache:(id /* block */)a0;

@end
