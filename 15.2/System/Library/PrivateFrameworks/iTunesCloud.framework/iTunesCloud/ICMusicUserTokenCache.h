@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICMusicUserTokenCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_cachedUserTokens;
}

@property (class, readonly, nonatomic) ICMusicUserTokenCache *sharedCache;

+ (void)_getCacheKeyForDeveloperToken:(id)a0 requestContext:(id)a1 completion:(id /* block */)a2;
+ (id)_decodeDeveloperTokenPart:(id)a0;

- (void).cxx_destruct;
- (id)_init;
- (void)_loadPersistedCacheWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_persistCache;
- (void)getCachedUserTokenForDeveloperToken:(id)a0 requestContext:(id)a1 completion:(id /* block */)a2;
- (void)setCachedUserToken:(id)a0 forDeveloperToken:(id)a1 requestContext:(id)a2 completion:(id /* block */)a3;
- (void)_handleMusicUserTokensDidChangeDistributedNotification:(id)a0;
- (void)_postLocalChangeNotification;

@end
