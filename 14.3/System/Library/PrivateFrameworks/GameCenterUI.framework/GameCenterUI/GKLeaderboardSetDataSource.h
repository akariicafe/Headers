@class NSArray, NSDictionary;

@interface GKLeaderboardSetDataSource : GKLeaderboardCollectionDataSource

@property (retain, nonatomic) NSArray *leaderboardSets;
@property (retain, nonatomic) NSDictionary *leaderboardSetAssetNames;
@property (retain, nonatomic) NSDictionary *leaderboardAssetNames;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })standardCellSizeForCollectionView:(id)a0;
- (void)handleSelectionInCollectionView:(id)a0 forItemAtIndexPath:(id)a1;
- (void)prepareCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)updateHighlightsInSectionHeader:(id)a0;
- (long long)allowedColumnCount:(long long)a0;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)itemForIndexPath:(id)a0;
- (long long)itemCount;
- (void)presentLeaderboardsListWithSet:(id)a0 segueToLeaderboard:(id)a1;
- (void)removeLeaderboardSetsWithoutImages;
- (id)title;

@end
