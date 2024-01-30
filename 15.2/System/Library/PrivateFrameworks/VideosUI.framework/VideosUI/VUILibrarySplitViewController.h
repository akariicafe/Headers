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

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)showDetailViewController:(id)a0 sender:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)menuCollectionViewControllerDidFinishLoading;
- (void)didSelectMenuItemAtIndexPath:(id)a0;
- (void)categoryMenuViewControllerShouldDismiss:(id)a0;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addMediaLibraryNotificationObservers;
- (id)_deviceMediaLibrary;
- (void)_addNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_homeShareMediaLibrariesDidChange:(id)a0;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)a0;
- (BOOL)vui_ppt_isLoading;
- (void)familyMemberViewController:(id)a0 didSelectFamilyMember:(id)a1;
- (void)homeShareViewController:(id)a0 didSelectHomeShare:(id)a1;
- (void)homeShareViewController:(id)a0 didUpdateWith:(id)a1;
- (void)fetchDidCompleteForDataSource:(id)a0;
- (id)initWithMenuDataSource:(id)a0;
- (id)_downloadViewController;
- (void)_setMenuControllerPrimaryOnlyMode;
- (BOOL)_menuDataSourceHasContent;
- (BOOL)_shouldLeftBarButton;
- (id)_entitiesDataSourceForCategoryType:(long long)a0;
- (void)setPageMetricsForCategory:(id)a0 onLibraryGridCollectionViewController:(id)a1;
- (id)_entitiesDataSourceForGenre:(id)a0;
- (id)_viewControllerForIndexPath:(id)a0;
- (void)gridCollectionViewController:(id)a0 didSelectMediaEntity:(id)a1;

@end
