@class SBSUIWallpaperPreviewViewController, NSArray, NSDictionary, WallpaperPanoramaViewControllerSpec, NSString;

@interface WallpaperPanoramaViewController : PUPhotosPanoramaViewController <SBSUIWallpaperPreviewViewControllerDelegate>

@property (retain, nonatomic, setter=_setWallpaperPanoramaSpec:) WallpaperPanoramaViewControllerSpec *_wallpaperPanoramaSpec;
@property (retain, nonatomic, setter=_setVariantBeingPreviewed:) NSDictionary *_variantBeingPreviewed;
@property (retain, nonatomic, setter=_setOptionsBeingPreviewed:) NSDictionary *_optionsBeingPreviewed;
@property (retain, nonatomic, setter=_setWallpaperVariants:) NSArray *_wallpaperVariants;
@property (nonatomic) BOOL mineOnly;
@property (retain, nonatomic, setter=_setPreviewController:) SBSUIWallpaperPreviewViewController *_previewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithSpec:(id)a0;
- (BOOL)isEmpty;
- (BOOL)canBeShownFromSuspendedState;
- (void).cxx_destruct;
- (BOOL)canDragOut;
- (BOOL)isPreheatingEnabled;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)a0;
- (void)updateLayoutMetrics;
- (void)loadView;
- (id)newGridLayout;
- (BOOL)allowSlideshowButton;
- (BOOL)shouldShowMenu;
- (void)configureGridCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (void)_fetchImageForWallPaperAsset:(id)a0 resultHandler:(id /* block */)a1;
- (BOOL)canDragIn;
- (struct CGSize { double x0; double x1; })_itemSizeForWidth:(double)a0;
- (void)configureSupplementaryView:(id)a0 ofKind:(id)a1 forIndexPath:(id)a2;
- (long long)_preferredWhitePointAdaptivityStyle;
- (BOOL)allowsPeeking;
- (id)initWithSpec:(id)a0 mineOnly:(BOOL)a1;
- (void)navigateToFactoryWallpaperAtIndex:(unsigned long long)a0;
- (void)navigateToPhoto:(id)a0;
- (void)presentPreviewControllerWithWallpaperDict:(id)a0 photo:(id)a1 andOptions:(id)a2;

@end
