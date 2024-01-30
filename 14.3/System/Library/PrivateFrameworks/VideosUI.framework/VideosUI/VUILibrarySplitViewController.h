@class VUIMenuDataSource, NSString, VUILibraryMenuDataSource, UINavigationController, VUIMenuCollectionViewController, NSMutableDictionary, VUILibraryAlertView, VUIMediaLibrary, UIViewController, VUIFamilyMember;
@protocol VUILibrarySplitViewControllerDelegate;

@interface VUILibrarySplitViewController : UISplitViewController <VUIMenuCollectionViewControllerDelegate, VUILibraryGridCollectionViewControllerDelegate, VUIHomeShareViewControllerDelegate, UISplitViewControllerDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol>

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (retain, nonatomic) UINavigationController *masterNavigationController;
@property (retain, nonatomic) UINavigationController *detailNavigationController;
@property (retain, nonatomic) VUILibraryMenuDataSource *menuDataSource;
@property (retain, nonatomic) UIViewController *detailViewController;
@property (retain, nonatomic) VUILibraryAlertView *alertView;
@property (retain, nonatomic) VUIMediaLibrary *currentHomeShareMediaLibrary;
@property (retain, nonatomic) NSMutableDictionary *entitiesDataSourceForMenuItem;
@property (retain, nonatomic) VUIMenuDataSource *categories;
@property (nonatomic) BOOL hasLoaded;
@property (weak, nonatomic) id<VUILibrarySplitViewControllerDelegate> librarySplitViewControllerDelegate;
@property (retain, nonatomic) VUIMenuCollectionViewController *menuViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VUIFamilyMember *familyMember;

- (void)showDetailViewController:(id)a0 sender:(id)a1;
- (BOOL)splitViewController:(id)a0 collapseSecondaryViewController:(id)a1 ontoPrimaryViewController:(id)a2;
- (id)splitViewController:(id)a0 separateSecondaryViewControllerFromPrimaryViewController:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (id)_deviceMediaLibrary;
- (BOOL)vui_ppt_isLoading;
- (void)_removeMediaLibraryNotificationObservers;
- (void)homeShareViewController:(id)a0 didSelectHomeShare:(id)a1;
- (void)_addNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_homeShareMediaLibrariesDidChange:(id)a0;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_addMediaLibraryNotificationObservers;
- (void)gridCollectionViewController:(id)a0 didSelectMediaEntity:(id)a1;
- (void)fetchDidCompleteForDataSource:(id)a0;
- (id)initWithMenuDataSource:(id)a0;
- (id)_downloadViewController;
- (void)menuCollectionViewControllerDidFinishLoading;
- (void)didSelectMenuItemAtIndexPath:(id)a0;
- (void)categoryMenuViewControllerShouldDismiss:(id)a0;
- (void)_setDisplayModeForLayoutType:(long long)a0;
- (id)_viewControllerForIndexPath:(id)a0;
- (BOOL)_menuDataSourceHasContent;
- (BOOL)_shouldLeftBarButton;
- (id)_entitiesDataSourceForCategoryType:(long long)a0;
- (void)setPageMetricsForCategory:(id)a0 onLibraryGridCollectionViewController:(id)a1;
- (id)_entitiesDataSourceForGenre:(id)a0;
- (void)familyMemberViewController:(id)a0 didSelectFamilyMember:(id)a1;

@end
