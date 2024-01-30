@class SBFMappedImageCache, NSString, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface SBFWallpaperCache : NSObject {
    NSString *_path;
    NSURL *_imageCachePath;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) SBFMappedImageCache *imageCache;

+ (id)wallpaperCache;

- (id)imageForKey:(id)a0 generatingIfNecessaryWithBlock:(id /* block */)a1;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)warmupForKey:(id)a0;
- (id)imageForKey:(id)a0 generatingIfNecessaryWithBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (id)imageURLForKey:(id)a0;
- (void)removeEverythingWithCompletion:(id /* block */)a0;
- (id)colorBoxesForKey:(id)a0 generatingIfNeceesaryFromImage:(id)a1;

@end
