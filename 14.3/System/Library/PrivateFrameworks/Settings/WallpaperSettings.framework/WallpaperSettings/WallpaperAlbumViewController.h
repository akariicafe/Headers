@class PSRootController, PSSpecifier, PUPhotosGridDownloadHelper, WallpaperAlbumViewControllerSpec, NSString, UIViewController;
@protocol PSController;

@interface WallpaperAlbumViewController : PUPhotosAlbumViewController <SBSUIWallpaperPreviewViewControllerDelegate, PSController>

@property (retain, nonatomic) WallpaperAlbumViewControllerSpec *wallpaperAlbumSpec;
@property (nonatomic) UIViewController<PSController> *parentController;
@property (nonatomic) PSRootController *rootController;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (readonly, nonatomic) PUPhotosGridDownloadHelper *downloadHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)initWithSpec:(id)a0;
- (void)handleURL:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)didLock;
- (id)readPreferenceValue:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void).cxx_destruct;
- (BOOL)canDragOut;
- (void)popupViewWillDisappear;
- (void)formSheetViewWillDisappear;
- (BOOL)isPreheatingEnabled;
- (void)didWake;
- (void)dealloc;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)a0;
- (void)updateLayoutMetrics;
- (void)popupViewDidDisappear;
- (void)formSheetViewDidDisappear;
- (id)newGridLayout;
- (BOOL)allowSlideshowButton;
- (void)navigateToPhoto:(id)a0 inAssetContainer:(id)a1 animated:(BOOL)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)didUnlock;
- (BOOL)shouldShowMenu;
- (void)willBecomeActive;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (void)_fetchImageForWallPaperAsset:(id)a0 resultHandler:(id /* block */)a1;
- (BOOL)canDragIn;
- (void)willUnlock;
- (void)suspend;
- (void)setAlbum:(id)a0 existingFetchResult:(id)a1;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)_showWallpaperImageViewControllerForPhoto:(id)a0;
- (BOOL)allowsPeeking;

@end
