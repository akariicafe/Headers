@class NSArray, UICollectionView, NSString, WFActionDrawerCoordinator;

@interface WFActionDrawerAppsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, WFActionDrawerStateConfigurable>

@property (readonly, weak, nonatomic) WFActionDrawerCoordinator *coordinator;
@property (retain, nonatomic) NSArray *appItems;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)loadView;
- (id)initWithCoordinator:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)state;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)moveToState:(id)a0 animated:(BOOL)a1;
- (long long)numberOfItemsWithWidth:(double)a0 totalWidth:(double)a1 minimumSpacing:(double)a2;
- (double)insetForEqualSpacingWithCollectionViewWidth:(double)a0 numberOfItems:(long long)a1 itemSize:(double)a2;
- (double)insetForCollectionViewWidth:(double)a0 numberOfItems:(long long)a1 itemSize:(double)a2 spacing:(double)a3;
- (void)updateAppItems;
- (void)fetchBundleIdentifiersFromActionRegistryWithCompletionHandler:(id /* block */)a0;
- (void)fetchBundleIdentifiersFromRecentDonationsWithCompletionHandler:(id /* block */)a0;
- (double)expectedCollectionViewWidth;

@end
