@class NSCache;

@interface PXPlacesImageCache : NSObject {
    NSCache *_cache;
}

- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)init;
- (void)removeCachedRenderedImageForGeotaggble:(id)a0 andKey:(id)a1;
- (id)cachedRenderedImageForGeotaggble:(id)a0 andKey:(id)a1;
- (void)cacheRenderedImage:(id)a0 forGeotaggble:(id)a1 andKey:(id)a2;

@end
