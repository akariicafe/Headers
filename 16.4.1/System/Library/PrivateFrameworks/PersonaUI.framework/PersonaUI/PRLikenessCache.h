@class NSURL, NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PRLikenessCache : NSObject {
    NSCache *_inMemoryCache;
    NSObject<OS_dispatch_queue> *_cacheLookupQueue;
}

@property (retain, nonatomic) NSURL *cacheDirectory;
@property (nonatomic) BOOL useMemory;
@property (nonatomic) BOOL useFilesystem;
@property (nonatomic) BOOL renderIfNeeded;

+ (id)sharedInstance;
+ (id)_imageAtURL:(id)a0;
+ (BOOL)_purgeOldCacheFilesInDirectory:(id)a0;
+ (id)_applicationCacheDirectory;
+ (BOOL)_ensureExistenceOfDirectory:(id)a0;
+ (id)_propertyValueForURL:(id)a0 forKey:(id)a1;
+ (BOOL)_removeImageAtURL:(id)a0;
+ (id)_staticRepresentationCacheURL;
+ (BOOL)_writeImage:(id)a0 toURL:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_cacheKeyForLikeness:(id)a0 context:(id)a1;
- (id)_cacheURLForLikeness:(id)a0 context:(id)a1;
- (void)_fetchFromFilesystem:(id)a0 context:(id)a1 renderBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_fetchFromMemory:(id)a0 context:(id)a1 renderBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_fetchWithReadBlock:(id /* block */)a0 writeBlock:(id /* block */)a1 renderBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_renderImageForLikeness:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)imageForLikeness:(id)a0 context:(id)a1 completion:(id /* block */)a2;

@end
