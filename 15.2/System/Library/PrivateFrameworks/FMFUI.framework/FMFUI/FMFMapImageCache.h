@class NSCache;

@interface FMFMapImageCache : NSObject

@property (retain, nonatomic) NSCache *_cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)cachedMapForHandles:(id)a0;
- (void)cacheMap:(id)a0 forHandles:(id)a1;
- (id)_keyForHandles:(id)a0;
- (id)_imageForMap:(id)a0;
- (id)_orientationKey;

@end
