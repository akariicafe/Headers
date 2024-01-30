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

- (BOOL)isEmpty;
- (id)initWithSpec:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)canDragOut;
- (long long)preferredWhitePointAdaptivityStyle;
- (BOOL)canDragIn;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)canBeShownFromSuspendedState;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (struct CGSize { double x0; double x1; })_itemSizeForWidth:(double)a0;
- (BOOL)allowSlideshowButton;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)a0;
- (void)configureGridCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)configureSupplementaryView:(id)a0 ofKind:(id)a1 forIndexPath:(id)a2;
- (BOOL)isPreheatingEnabled;
- (id)newGridLayout;
- (BOOL)shouldShowMenu;
- (void)updateLayoutMetrics;
- (BOOL)allowsPeeking;
- (id)initWithSpec:(id)a0 mineOnly:(BOOL)a1;
- (void)navigateToFactoryWallpaperAtIndex:(unsigned long long)a0;
- (void)navigateToPhoto:(id)a0;
- (void)presentPreviewControllerWithWallpaperDict:(id)a0 photo:(id)a1 andOptions:(id)a2;

@end
