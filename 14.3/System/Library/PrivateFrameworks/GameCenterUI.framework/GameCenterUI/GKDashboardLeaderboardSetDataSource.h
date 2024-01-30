@class NSArray, GKGameRecord, NSDictionary;

@interface GKDashboardLeaderboardSetDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) NSArray *leaderboardSets;
@property (retain, nonatomic) NSDictionary *leaderboardSetAssetNames;
@property (retain, nonatomic) NSDictionary *leaderboardAssetNames;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithGameRecord:(id)a0;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)a0;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)itemForIndexPath:(id)a0;
- (id)sectionHeaderText;
- (long long)itemCount;
- (void)removeLeaderboardSetsWithoutImages;

@end
