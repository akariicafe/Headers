@class GKTurnBasedMatch;

@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKTurnBasedMatch *match;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)dealloc;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)a0;
- (id)initWithMatch:(id)a0;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)itemForIndexPath:(id)a0;
- (id)sectionHeaderText;
- (long long)itemCount;

@end
