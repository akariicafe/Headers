@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PXGCGImageTextureProvider : PXGTextureProvider {
    NSCache *_imageCache;
    NSCache *_additionalInfoCache;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (void)releaseCachedResources;
- (void)lowMemoryModeDidChange;
- (void)requestCGImageWithCacheKey:(id)a0 imageProvider:(id /* block */)a1 resultHandler:(id /* block */)a2;
- (void)requestCGImageAndAdditionalInfoWithCacheKey:(id)a0 imageProvider:(id /* block */)a1 resultHandler:(id /* block */)a2;
- (void)cacheAdditionalInfo:(id)a0 withKey:(id)a1;
- (void)_updateCacheLimit;

@end
