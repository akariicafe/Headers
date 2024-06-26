@class VUIFamilyMember, VUILibraryMenuDataSource, VUILibraryMenuItemViewCell, UIBarButtonItem, VUILibraryBannerCollectionViewCell, _VUILibrarySeeAllController, VUIMediaLibrary, NSMutableArray, NSString, VUIViewControllerContentPresenter, VUILibraryShelvesDataSource, NSArray, VUIDownloadTableViewController;

@interface VUILibraryViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUILibraryShelfCollectionViewControllerDelegate, UIGestureRecognizerDelegate, VUIShelvesDataSourceDelegate, VUILibraryDataSourceDelegate, VUIMenuCollectionViewControllerDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol> {
    BOOL _ppt_isLoaded;
}

@property (retain, nonatomic) UIBarButtonItem *libraryBarButton;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (retain, nonatomic) VUILibraryMenuDataSource *menuDataSource;
@property (nonatomic) BOOL hasMenuItemFetchCompleted;
@property (retain, nonatomic) NSArray *menuCells;
@property (retain, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell;
@property (retain, nonatomic) NSArray *homeShares;
@property (retain, nonatomic) VUIMediaLibrary *currentHomeShareMediaLibrary;
@property (retain, nonatomic) VUILibraryBannerCollectionViewCell *bannerViewSizingCell;
@property (retain, nonatomic) VUILibraryShelvesDataSource *shelvesDataSource;
@property (retain, nonatomic) NSMutableArray *shelves;
@property (retain, nonatomic) NSMutableArray *validShelfTypes;
@property (nonatomic) BOOL hasMediaEntitiesFetchCompleted;
@property (retain, nonatomic) _VUILibrarySeeAllController *currentSeeAllController;
@property (nonatomic) BOOL doesDeviceSupportHDR;
@property (readonly, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (retain, nonatomic) VUIDownloadTableViewController *presentedDownloadViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VUIFamilyMember *familyMember;

+ (id)_localizedTitleForShelfType:(long long)a0;
+ (id /* block */)shelfTypesSortComparator;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)_accountsChanged:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateNavigationTitle;
- (void)start;
- (void)viewDidAppear:(BOOL)a0;
- (void)_networkReachabilityDidChange:(id)a0;
- (id)_navigationBarTitle;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_menuItems;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureWithCollectionView:(id)a0;
- (id)_deviceMediaLibrary;
- (BOOL)vui_ppt_isLoading;
- (void)dataSourceDidFinishFetching:(id)a0;
- (id)_dataSourceForShelves;
- (void)shelvesDidFinishWithDataSource:(id)a0;
- (void)shelfCollectionViewController:(id)a0 collectionView:(id)a1 didSelectMediaEntity:(id)a2 atIndexPath:(id)a3;
- (void)seeAllButtonPressed:(id)a0;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_homeShareMediaLibrariesDidChange:(id)a0;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_addMediaLibraryNotificationObservers;
- (BOOL)_isDeviceMediaLibraryInitialUpdateInProgress;
- (void)_startMonitoringDeviceMediaLibraryInitialUpdate;
- (BOOL)_gestureRecognizerShouldBegin;
- (void)_deviceMediaLibraryUpdateStateDidChange:(id)a0;
- (void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
- (id)initWithMenuDataSource:(id)a0;
- (id)_downloadViewController;
- (void)didSelectMenuItemAtIndexPath:(id)a0;
- (void)familyMemberViewController:(id)a0 didSelectFamilyMember:(id)a1;
- (void)_updateViewIfFetchComplete;
- (void)_presentDownloadViewController;
- (id)_localizedTitleForCellType:(long long)a0;
- (void)_selectLibraryCellType:(long long)a0;
- (void)_constructShelves;
- (void)_configureShelfViewController:(id)a0 withShelfType:(long long)a1;
- (void)_showContentOrNoContentView;
- (void)_updateVisibleCellSeparators;
- (BOOL)_haveAllInitialFetchesCompleted;
- (void)_constructLibraryDataSourceAndUpdateActiveView;
- (BOOL)_downloadsAreAvailable;
- (void)_removeDownloadViewController;
- (BOOL)_shouldShowContentView;
- (id)_viewControllerWithCellType:(long long)a0;

@end
