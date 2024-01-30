@class NSString, NSCache, WKWallpaperBundleCollection;

@interface WallpaperGridViewController : UICollectionViewController <SBSUIWallpaperPreviewViewControllerDelegate, PSStateRestoration> {
    NSCache *_thumbnailCache;
}

@property (retain, nonatomic) WKWallpaperBundleCollection *_bundleCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)viewDidLoad;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (id)initWithWallperBundleCollection:(id)a0;
- (id)_thumbnailForWallpaperBundle:(id)a0;
- (void)_wallpaperPreviewController:(id)a0 wallpaperLocations:(long long)a1;

@end
