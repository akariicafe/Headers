@class NSArray, NSDictionary;

@interface GKLeaderboardSetDataSource : GKLeaderboardCollectionDataSource

@property (retain, nonatomic) NSArray *leaderboardSets;
@property (retain, nonatomic) NSDictionary *leaderboardSetAssetNames;
@property (retain, nonatomic) NSDictionary *leaderboardAssetNames;

- (id)title;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)itemCount;
- (id)itemForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })standardCellSizeForCollectionView:(id)a0;
- (void)handleSelectionInCollectionView:(id)a0 forItemAtIndexPath:(id)a1;
- (void)prepareCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)updateHighlightsInSectionHeader:(id)a0;
- (long long)allowedColumnCount:(long long)a0;
- (void)presentLeaderboardsListWithSet:(id)a0 segueToLeaderboard:(id)a1;
- (void)removeLeaderboardSetsWithoutImages;

@end
