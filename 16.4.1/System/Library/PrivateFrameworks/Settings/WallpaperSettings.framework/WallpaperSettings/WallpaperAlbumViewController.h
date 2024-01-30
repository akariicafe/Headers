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

- (void)willBecomeActive;
- (void)willResignActive;
- (id)initWithSpec:(id)a0;
- (BOOL)canDragOut;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)suspend;
- (long long)preferredWhitePointAdaptivityStyle;
- (BOOL)canDragIn;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (BOOL)shouldShowSectionHeaders;
- (void)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)didLock;
- (void)showController:(id)a0;
- (void)didWake;
- (BOOL)canBeShownFromSuspendedState;
- (void)didUnlock;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)willUnlock;
- (void)formSheetViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (void)popupViewDidDisappear;
- (void)popupViewWillDisappear;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (BOOL)allowSlideshowButton;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)a0;
- (BOOL)isPreheatingEnabled;
- (id)newGridLayout;
- (void)setAlbum:(id)a0 existingFetchResult:(id)a1;
- (BOOL)shouldShowMenu;
- (void)updateLayoutMetrics;
- (BOOL)allowsPeeking;

@end
