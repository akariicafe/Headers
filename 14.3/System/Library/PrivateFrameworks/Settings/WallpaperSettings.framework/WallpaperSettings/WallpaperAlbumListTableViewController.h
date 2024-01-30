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

- (void)willResignActive;
- (id)initWithSpec:(id)a0;
- (id)assetsFilterPredicate;
- (void)handleURL:(id)a0;
- (void)_updateLayout;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)didLock;
- (id)readPreferenceValue:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void).cxx_destruct;
- (void)popupViewWillDisappear;
- (void)formSheetViewWillDisappear;
- (void)didWake;
- (void)viewDidLayoutSubviews;
- (void)popupViewDidDisappear;
- (void)formSheetViewDidDisappear;
- (long long)tableViewStyle;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)didUnlock;
- (void)willBecomeActive;
- (void)_prepareStackView:(id)a0 forCollection:(id)a1 withStackCount:(long long)a2 withCustomEmptyPlaceHolderImage:(id)a3;
- (BOOL)updateSpec;
- (unsigned long long)filteringAssetTypes;
- (BOOL)showsEmptyPlaceholderWhenEmpty;
- (BOOL)canShowSyncProgress;
- (BOOL)canShowAvatarViews;
- (void)setTitleForCell:(id)a0 withCollection:(id)a1;
- (BOOL)showsTopPlaceholdersSection;
- (id)backgroundColorForTableView;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)willUnlock;
- (void)suspend;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)_navigateToStills;
- (void)_navigateToLive;
- (void)_navigateToDynamic;
- (void)navigateToAssetContainer:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_configureWallpaperViewControllerAllowedActions:(id)a0;
- (void)bundleCollectionsTableViewCell:(id)a0 didTapOnBundleCollectionWithWallpaperType:(unsigned long long)a1;
- (void)_navigateToVR;
- (void)_navigateToPanorama;

@end
