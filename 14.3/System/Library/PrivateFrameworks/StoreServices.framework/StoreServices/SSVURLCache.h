@class SSVURLCacheConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface SSVURLCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    struct __CFURLStorageSession { } *_cacheStorageSession;
    SSVURLCacheConfiguration *_configuration;
    struct _CFURLCache { } *_urlCache;
}

- (id)cachedConnectionResponseForRequestProperties:(id)a0 cachedResponse:(id *)a1;
- (void)storeConnectionResponse:(id)a0 forRequestProperties:(id)a1 userInfo:(id)a2;
- (id)cachedConnectionResponseForRequestProperties:(id)a0;
- (void)loadMemoryCacheFromDisk;
- (void)saveMemoryCacheToDisk;
- (id)init;
- (void)storeConnectionResponse:(id)a0 forRequestProperties:(id)a1;
- (void).cxx_destruct;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (void)dealloc;
- (id)cachedResponseForRequest:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)removeAllCachedResponses;
- (void)configureRequest:(id)a0;

@end
