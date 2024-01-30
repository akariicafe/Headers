@class GKLeaderboardSet, NSTimer, UICollectionView, NSDictionary, NSMutableArray;

@interface GKLeaderboardListDataSource : GKLeaderboardCollectionDataSource

@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) NSMutableArray *leaderboards;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSDictionary *assetNames;

- (id)title;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)itemCount;
- (void)dealloc;
- (void)setupCollectionView:(id)a0;
- (id)itemForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })standardCellSizeForCollectionView:(id)a0;
- (void)handleSelectionInCollectionView:(id)a0 forItemAtIndexPath:(id)a1;
- (void)prepareCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)removeLeaderboardsWithoutImages;
- (id)initWithGameRecord:(id)a0 leaderboardSet:(id)a1;
- (void)setupTimer;
- (void)updateHighlightsInSectionHeader:(id)a0;

@end
