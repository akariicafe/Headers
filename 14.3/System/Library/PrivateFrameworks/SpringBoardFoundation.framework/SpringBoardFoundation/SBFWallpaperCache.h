@class SBFMappedImageCache, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SBFWallpaperCache : NSObject {
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) SBFMappedImageCache *imageCache;

+ (id)wallpaperCache;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)imageForKey:(id)a0 generatingIfNecessaryWithBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)warmupForKey:(id)a0;
- (id)colorBoxesForKey:(id)a0 generatingIfNeceesaryFromImage:(id)a1;
- (void)removeEverythingWithCompletion:(id /* block */)a0;
- (id)imageForKey:(id)a0 generatingIfNecessaryWithBlock:(id /* block */)a1;

@end
