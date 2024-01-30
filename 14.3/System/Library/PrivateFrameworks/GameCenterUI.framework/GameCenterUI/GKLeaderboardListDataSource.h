@class GKLeaderboardSet, NSTimer, UICollectionView, NSDictionary, NSMutableArray;

@interface GKLeaderboardListDataSource : GKLeaderboardCollectionDataSource

@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) NSMutableArray *leaderboards;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSDictionary *assetNames;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })standardCellSizeForCollectionView:(id)a0;
- (void)handleSelectionInCollectionView:(id)a0 forItemAtIndexPath:(id)a1;
- (void)prepareCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)setupTimer;
- (void)updateHighlightsInSectionHeader:(id)a0;
- (void)setupCollectionView:(id)a0;
- (void)removeLeaderboardsWithoutImages;
- (id)initWithGameRecord:(id)a0 leaderboardSet:(id)a1;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)itemForIndexPath:(id)a0;
- (long long)itemCount;
- (id)title;

@end
