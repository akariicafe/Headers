@class NSString, UICollectionView;

@interface MPUCollectionViewController : MPUDataSourceViewController <MPStoreDownloadManagerObserver, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
}

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)invalidationContextClass;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canEditItemAtIndexPath:(id)a1;
- (void)reloadData;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithDataSource:(id)a0;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)downloadManager:(id)a0 downloadDidFinish:(id)a1;
- (void)dealloc;
- (void)downloadManager:(id)a0 didAddDownloads:(id)a1 removeDownloads:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)downloadManager:(id)a0 downloadPurchaseDidFinish:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)_createCollectionView;
- (void)_updateVisibleCellsForDownloads:(id)a0 updateAllCells:(BOOL)a1;
- (id)reuseIdentifierForCellAtIndexPath:(id)a0;
- (void)configureCell:(id)a0 atIndexPath:(id)a1 withEntity:(id)a2 invalidationContext:(id)a3;
- (id)_createCollectionViewLayout;
- (long long)collectionView:(id)a0 editingStyleForItemAtIndexPath:(id)a1;

@end
