@class NSString;
@protocol WKWallpaperRepresenting;

@interface WKSBSetWallpaperParameters : NSObject

@property (readonly, nonatomic) id<WKWallpaperRepresenting> wallpaperRepresenting;
@property (readonly, copy, nonatomic) NSString *wallpaperLocation;
@property (readonly, nonatomic) BOOL isProceduralWallpaper;

- (void).cxx_destruct;
- (void)_retrieveHomeScreenPreviewForAppleSystemFileBasedWallpaperWithCompletion:(id /* block */)a0;
- (void)_retrieveHomeScreenPreviewForAppleSystemValueBasedWallpaperWithCompletion:(id /* block */)a0;
- (void)_retrieveHomeScreenPreviewForCustomPhotoWallpaperWithCompletion:(id /* block */)a0;
- (void)_retrieveLockScreenPreviewForAppleSystemFileBasedWallpaperWithCompletion:(id /* block */)a0;
- (void)_retrieveLockScreenPreviewForCustomPhotoWallpaperWithCompletion:(id /* block */)a0;
- (void)_retrievePreviewForAppleSystemDynamicWallpaperWithCompletion:(id /* block */)a0;
- (void)_retrievePreviewForAppleSystemStripeWallpaperRepresentingWithCompletion:(id /* block */)a0;
- (id)_wallpaperPreviewInputForStripeWallpaper:(id)a0 wallpaperMode:(long long)a1;
- (id)_wallpaperPreviewInputsForStripesWallpaperRepresenting;
- (id)initForHomeScreenWithWallpaperRepresenting:(id)a0;
- (id)initForLockScreenWithWallpaperRepresenting:(id)a0;
- (void)resolveParametersForProceduralWallpaperWithCompletion:(id /* block */)a0;
- (void)resolveParametersForWallpaperWithCompletion:(id /* block */)a0;

@end
