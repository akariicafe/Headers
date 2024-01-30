@class NSArray, BSUIMappedImageCache;
@protocol HFProcessedWallpaperSource;

@interface HFWallpaperImageCache : NSObject

@property (retain, nonatomic) BSUIMappedImageCache *imageCache;
@property (retain) id<HFProcessedWallpaperSource> processedWallpaperSource;
@property (readonly, nonatomic) NSArray *supportedProcessedVariants;

- (void).cxx_destruct;
- (id)init;
- (id)imageForVariant:(long long)a0 wallpaper:(id)a1 withOriginalImageGenerator:(id /* block */)a2;
- (void)saveVariantsForWallpaper:(id)a0 originalImage:(id)a1;
- (void)pruneUnusedWallpaperVariants:(id)a0;
- (id)_cacheKeyForWallpaper:(id)a0 withVariant:(long long)a1;

@end
