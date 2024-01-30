@class GKTurnBasedMatch;

@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKTurnBasedMatch *match;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)itemCount;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)a0;
- (id)initWithMatch:(id)a0;
- (id)itemForIndexPath:(id)a0;
- (id)sectionHeaderText;

@end
