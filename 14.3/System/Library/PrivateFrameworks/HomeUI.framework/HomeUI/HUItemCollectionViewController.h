@class NSString, HFItemManager, NSMutableSet, NSHashTable, NSMutableArray, HFItem;
@protocol NACancelable;

@interface HUItemCollectionViewController : HUCollectionViewController <HFExecutionEnvironmentObserver, UICollectionViewDataSourcePrefetching, HFItemManagerDelegate, HUItemManagerContainer, HUItemPresentationContainer, HUPreloadableViewController>

@property (retain, nonatomic) HFItemManager *itemManager;
@property (nonatomic) BOOL hasFinishedInitialLoad;
@property (readonly, nonatomic) NSMutableSet *registeredCellClasses;
@property (retain, nonatomic) NSMutableArray *foregroundUpdateFutures;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible;
@property (readonly, nonatomic) NSMutableArray *viewVisibleFutures;
@property (nonatomic) BOOL visibilityUpdatesEnabled;
@property (retain, nonatomic) id<NACancelable> deferredVisibilityUpdate;
@property (retain, nonatomic) id<NACancelable> iconPreloadCancelable;
@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillAppearTime;
@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillDisappearTime;
@property (nonatomic) BOOL wantsPreferredContentSize;
@property (nonatomic) BOOL suppressCollectionViewUpdatesForReorderCommit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HFItem *hu_presentedItem;

+ (unsigned long long)updateMode;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_updateTitle;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)executionEnvironmentRunningStateDidChange:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)viewDidLoad;
- (void)itemManager:(id)a0 didChangeHome:(id)a1;
- (void)itemManager:(id)a0 didChangeSourceItem:(id)a1;
- (void)itemManager:(id)a0 didUpdateResultsForSourceItem:(id)a1;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (id)itemManager:(id)a0 futureToUpdateItems:(id)a1 itemUpdateOptions:(id)a2;
- (void)itemManagerDidFinishUpdate:(id)a0;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (void)itemManager:(id)a0 didRemoveSections:(id)a1;
- (void)itemManager:(id)a0 didInsertSections:(id)a1;
- (void)itemManager:(id)a0 didMoveSection:(long long)a1 toSection:(long long)a2;
- (void)itemManager:(id)a0 didRemoveItem:(id)a1 atIndexPath:(id)a2;
- (void)itemManager:(id)a0 didInsertItem:(id)a1 atIndexPath:(id)a2;
- (void)itemManager:(id)a0 didMoveItem:(id)a1 fromIndexPath:(id)a2 toIndexPath:(id)a3;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)hu_preloadContent;
- (id)childViewControllersToPreload;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSizeForCollectionViewContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)recursivelyDisableItemUpdates:(BOOL)a0 withReason:(id)a1;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (BOOL)isLayoutDependentOnItemState;
- (void)_cancelIconPreload;
- (void)performBatchCollectionViewUpdatesForUpdateRequest:(id)a0 reloadOnly:(BOOL)a1;
- (void)_preloadIconsIfNeeded;

@end
