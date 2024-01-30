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

- (void)willBecomeActive;
- (id)assetsFilterPredicate;
- (void)willResignActive;
- (id)initWithSpec:(id)a0;
- (void)_updateLayout;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)suspend;
- (long long)preferredWhitePointAdaptivityStyle;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)handleURL:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)_prepareStackView:(id)a0 forCollection:(id)a1 withStackCount:(long long)a2 withCustomEmptyPlaceHolderImage:(id)a3;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableViewStyle;
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
- (void)setTitleForCell:(id)a0 withCollection:(id)a1;
- (id)backgroundColorForTableView;
- (BOOL)canShowAvatarViews;
- (BOOL)canShowSyncProgress;
- (unsigned long long)filteringAssetTypes;
- (BOOL)showsEmptyPlaceholderWhenEmpty;
- (BOOL)showsTopPlaceholdersSection;
- (BOOL)updateSpec;
- (void)_navigateToLive;
- (void)_configureWallpaperViewControllerAllowedActions:(id)a0;
- (void)_navigateToDynamic;
- (void)_navigateToPanorama;
- (void)_navigateToStills;
- (void)_navigateToVR;
- (void)bundleCollectionsTableViewCell:(id)a0 didTapOnBundleCollectionWithWallpaperType:(unsigned long long)a1;
- (void)navigateToAssetContainer:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
