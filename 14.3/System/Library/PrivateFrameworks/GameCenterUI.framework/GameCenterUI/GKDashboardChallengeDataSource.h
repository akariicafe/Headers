@class NSArray, GKGameRecord;

@interface GKDashboardChallengeDataSource : GKCollectionDataSource <GKDashboardChallengeDetailViewControllerDelegate>

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) NSArray *challenges;
@property (nonatomic) BOOL shouldShowPlay;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)dealloc;
- (id)initWithGameRecord:(id)a0;
- (double)preferredCollectionHeight;
- (void)userDidSelectPlay:(id)a0;
- (void)newDashboardUserDidSelectPlayChallenge:(id)a0;
- (void)setupCollectionView:(id)a0;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)itemForIndexPath:(id)a0;
- (id)sectionHeaderText;
- (long long)itemCount;

@end
