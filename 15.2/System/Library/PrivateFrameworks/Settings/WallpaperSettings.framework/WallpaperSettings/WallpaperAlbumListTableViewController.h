@class UIViewController, PSRootController, PSSpecifier, WKWallpaperBundleImporter, NSString, WallpaperAlbumListTableViewControllerSpec;
@protocol PSController;

@interface WallpaperAlbumListTableViewController : PUAlbumListViewController <WSBundleCollectionsTableViewCellDelegate, PSController>

@property (retain, nonatomic) WallpaperAlbumListTableViewControllerSpec *wallpaperAlbumListTableViewSpec;
@property (nonatomic) UIViewController<PSController> *parentController;
@property (nonatomic) PSRootController *rootController;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (retain, nonatomic) WKWallpaperBundleImporter *wallpaperBundleImporter;
@property (nonatomic) double layoutReferenceWidth;
@property (nonatomic) struct CGSize { double width; double height; } canonicalButtonSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredWhitePointAdaptivityStyle;
- (void)handleURL:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)willResignActive;
- (void)didLock;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)_updateLayout;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (id)initWithSpec:(id)a0;
- (void)didWake;
- (void)popupViewDidDisappear;
- (void)formSheetViewDidDisappear;
- (void)_prepareStackView:(id)a0 forCollection:(id)a1 withStackCount:(long long)a2 withCustomEmptyPlaceHolderImage:(id)a3;
- (void)willBecomeActive;
- (void)didUnlock;
- (BOOL)updateSpec;
- (void).cxx_destruct;
- (id)assetsFilterPredicate;
- (void)willUnlock;
- (void)suspend;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)backgroundColorForTableView;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)showsEmptyPlaceholderWhenEmpty;
- (unsigned long long)filteringAssetTypes;
- (BOOL)canShowSyncProgress;
- (long long)tableViewStyle;
- (void)setTitleForCell:(id)a0 withCollection:(id)a1;
- (void)formSheetViewWillDisappear;
- (void)popupViewWillDisappear;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (BOOL)canShowAvatarViews;
- (BOOL)showsTopPlaceholdersSection;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_navigateToStills;
- (void)_navigateToLive;
- (void)_navigateToDynamic;
- (void)navigateToAssetContainer:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_configureWallpaperViewControllerAllowedActions:(id)a0;
- (void)bundleCollectionsTableViewCell:(id)a0 didTapOnBundleCollectionWithWallpaperType:(unsigned long long)a1;
- (void)_navigateToVR;
- (void)_navigateToPanorama;

@end
