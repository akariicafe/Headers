@class NSCache;

@interface SHImageCache : NSObject

@property (readonly, nonatomic) NSCache *cache;

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (void)cacheImage:(id)a0 forURL:(id)a1;
- (id)cachedImageForURL:(id)a0;

@end
