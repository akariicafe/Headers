@class NSString, NSCache, WKWallpaperBundleCollection;

@interface WallpaperGridViewController : UICollectionViewController <SBSUIWallpaperPreviewViewControllerDelegate, PSStateRestoration> {
    NSCache *_thumbnailCache;
}

@property (retain, nonatomic) WKWallpaperBundleCollection *_bundleCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void).cxx_destruct;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (void)viewDidLoad;
- (id)initWithWallperBundleCollection:(id)a0;
- (id)_thumbnailForWallpaperBundle:(id)a0;
- (void)_handlePresentWallpaperPreviewForWallpaperBundle:(id)a0;
- (id)_wallpaperPreviewInputForStripeWallpaper:(id)a0 wallpaperMode:(long long)a1;
- (id)_wallpaperPreviewInputsForStripesWallpaperBundle:(id)a0;
- (id)_fileBasedWallpaperPreviewViewControllerPromiseWithWallpaperBundle:(id)a0;
- (id)_valueBasedDynamicWallpaperPreviewViewControllerWithWallpaperBundle:(id)a0;
- (id)_valueBasedStripesWallpaperPreviewViewControllerWithWallpaperBundle:(id)a0;
- (void)_wallpaperPreviewController:(id)a0 wallpaperLocations:(long long)a1;

@end
