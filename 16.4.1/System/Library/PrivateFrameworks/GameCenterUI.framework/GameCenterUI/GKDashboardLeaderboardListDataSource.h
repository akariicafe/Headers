@class GKLeaderboardSet, NSArray, GKGameRecord, NSDictionary;

@interface GKDashboardLeaderboardListDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) NSArray *leaderboards;
@property (retain, nonatomic) NSDictionary *assetNames;

- (long long)itemCount;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)removeLeaderboardsWithoutImages;
- (id)initWithGameRecord:(id)a0 leaderboardSet:(id)a1;
- (id)itemForIndexPath:(id)a0;
- (double)preferredCollectionHeight;
- (id)sectionHeaderText;
- (void)setupCollectionView:(id)a0;

@end
