@class UIBarButtonItem, NSIndexPath, PXPhotosDataSourceConfiguration, UITableView, PUVideoListContentUnavailableView, UIViewController, NSMutableArray, PUOneUpPresentationHelper, NSString, PXPhotoKitAssetsDataSourceManager, UITableViewCell, PHImageRequestOptions, PXPhotosDataSource;

@interface PUVideoListViewController : PUStorageManagementBaseController <UITableViewDataSource, UITableViewDelegate, UITableViewDataSource, UITableViewDelegate, PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PUDeletePhotosActionControllerDelegate, PUVideoListAssetExpungeActionPerformerDelegate, UIScrollViewDelegate> {
    NSMutableArray *_selectedIndexPathForDelete;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_deleteBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UITableViewCell *_videoCell;
    BOOL _needsUpdateCellConfiguration;
}

@property (retain, nonatomic, setter=_setOneUpPresentationHelper:) PUOneUpPresentationHelper *_oneUpPresentationHelper;
@property (retain, nonatomic, setter=_setDataSource:) PXPhotosDataSource *_dataSource;
@property (retain, nonatomic, setter=_setDataSourceManagerConfiguration:) PXPhotosDataSourceConfiguration *_dataSourceManagerConfiguration;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *_photoKitDataSourceManager;
@property (readonly, nonatomic) PHImageRequestOptions *_imageRequestOptions;
@property (weak, nonatomic, setter=_setExpungeActionSheet:) UIViewController *_expungeActionSheet;
@property (retain, nonatomic, setter=_setMainTableView:) UITableView *_mainTableView;
@property (nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) BOOL _viewInSyncWithModel;
@property (nonatomic, setter=_setAssetsFetchResultIsValid:) BOOL _assetsFetchResultIsValid;
@property (retain, nonatomic, setter=_setLastNavigatedAssetIndexPath:) NSIndexPath *_lastNavigatedAssetIndexPath;
@property (retain, nonatomic, setter=_setContentUnavailableView:) PUVideoListContentUnavailableView *_contentUnavailableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)oneUpPresentationHelper:(id)a0 transitionTypeWithProposedTransitionType:(long long)a1;
- (void)oneUpPresentationHelper:(id)a0 didDismissOneUpViewController:(id)a1;
- (unsigned long long)oneUpPresentationHelperAdditionalOptions:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)assetsInAssetCollection:(id)a0;
- (void)_ensureOneUpPresentationHelper;
- (void).cxx_destruct;
- (BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_needsUpdate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })oneUpPresentationHelper:(id)a0 rectForAssetReference:(id)a1 cropInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)_updateIfNeeded;
- (id)_videoCell;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)_deleteBarButtonItem;
- (id)photoCollectionAtIndex:(unsigned long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)assetCollectionsFetchResult;
- (long long)oneUpPresentationHelperPreferredBarStyle:(id)a0;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)deletePhotosActionController:(id)a0 presentConfirmationViewController:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (long long)preferredAlertControllerStyleForDeletePhotosActionController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)actionPerformer:(id)a0 stopExcludingAssetsFromDataSource:(id)a1;
- (void)actionPerformer:(id)a0 excludeAssetsFromDataSource:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)_editBarButtonItem;
- (void)_reloadContentView;
- (void)_setLeftBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)_setRightBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)_installVideoListView;
- (long long)oneUpPresentationOrigin:(id)a0;
- (void)_updateNavigationBarAnimated:(BOOL)a0;
- (void)_updateSubviewsOrderingAndVisibilityWithVideoCounts:(unsigned long long)a0;
- (void)_installContentUnavailableView;
- (void)_updatePreparedCellsConfiguration;
- (id)_tableViewCellContentViewAtIndexPath:(id)a0;
- (void)selectVideoItems:(id)a0;
- (void)_addIndexPathToDeleteSelection:(id)a0;
- (unsigned long long)_numberOfSelectedCellsForDelete;
- (void)_removeIndexPathFromDeleteSelection:(id)a0;
- (void)_clearAllIndexPathsForDeleteSelection;
- (void)cancelEditingMode:(id)a0;
- (void)_deleteItemsAtSelectedIndexes:(id)a0;
- (id)_headerViewForTableView:(id)a0;
- (void)_configureTableView:(id)a0;
- (id)_videoThumbnailViewForAssetAtIndexPath:(id)a0;
- (void)_presentOneUpViewControllerForAssetAtInderxPath:(id)a0;
- (void)_updateAssetsFetchResultIfNeeded;
- (BOOL)_shouldUpdateTableViewForDataSource:(id)a0;
- (void)updateVideoListCellContentView:(id)a0 forItemAtIndexPath:(id)a1 animated:(BOOL)a2;
- (void)processDataSourceChange:(id)a0;
- (id)oneUpPresentationHelperViewController:(id)a0;
- (void)photosDataSource:(id)a0 didChange:(id)a1;
- (void)deleteSelectedItems:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateInterfaceLayoutIfNecessary;
- (void)updateListCellForItemAtIndexPath:(id)a0 animated:(BOOL)a1;
- (void)_updateMainView;
- (void)_invalidatePreparedCellsConfiguration;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)_cancelBarButtonItem;
- (void)viewDidLoad;

@end
