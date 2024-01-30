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

- (long long)preferredWhitePointAdaptivityStyle;
- (void)handleURL:(id)a0;
- (void)willResignActive;
- (void)didLock;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)initWithSpec:(id)a0;
- (void)didWake;
- (void)popupViewDidDisappear;
- (void)formSheetViewDidDisappear;
- (void)willBecomeActive;
- (BOOL)canDragOut;
- (BOOL)shouldShowSectionHeaders;
- (void)didUnlock;
- (void).cxx_destruct;
- (void)setAlbum:(id)a0 existingFetchResult:(id)a1;
- (void)willUnlock;
- (void)suspend;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)dealloc;
- (BOOL)canDragIn;
- (void)formSheetViewWillDisappear;
- (void)popupViewWillDisappear;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (id)newGridLayout;
- (BOOL)allowSlideshowButton;
- (BOOL)isPreheatingEnabled;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)a0;
- (void)updateLayoutMetrics;
- (BOOL)shouldShowMenu;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (BOOL)allowsPeeking;

@end
