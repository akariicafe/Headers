@interface HUDashboardSectionListViewController : HUItemCollectionViewController <HFHomeObserver, HUCollectionLayoutManagerDelegate> {
    void /* unknown type, empty encoding */ dashboardContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_layoutManager;
}

- (void)_cancel;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)_done;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)home:(id)a0 didUpdateApplicationDataForRoom:(id)a1;
- (void)homeDidUpdateApplicationData:(id)a0;
- (id)layoutSectionForSection:(long long)a0 layoutEnvironment:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)didReorderItemWithSortedItemsBySectionID:(id)a0;
- (id)displayedItemsInSection:(id)a0;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (BOOL)shouldShowHeaderForSection:(id)a0;

@end
