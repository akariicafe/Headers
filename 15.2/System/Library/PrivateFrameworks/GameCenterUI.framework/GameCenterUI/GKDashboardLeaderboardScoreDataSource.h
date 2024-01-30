@class UIFont, NSArray, GKGameRecord, GKLeaderboard;

@interface GKDashboardLeaderboardScoreDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) NSArray *scores;
@property (nonatomic) long long visibleItemCount;
@property (readonly, nonatomic) BOOL needsShowcaseCell;
@property (readonly, nonatomic) BOOL needsShowMoreCell;
@property (readonly, nonatomic) UIFont *sectionHeaderFont;
@property (nonatomic, getter=isShowingMoreScores) BOOL showingMoreScores;
@property (nonatomic) BOOL forceInitialShowMore;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (nonatomic) long long playerScope;
@property (nonatomic) long long timeScope;
@property (weak, nonatomic) id timeScopeTarget;
@property (nonatomic) SEL timeScopeAction;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)setTimeScope:(long long)a0;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)itemCount;
- (long long)timeScope;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)a0;
- (id)itemForIndexPath:(id)a0;
- (id)sectionHeaderText;
- (id)initWithGameRecord:(id)a0 leaderboard:(id)a1;
- (void)setPlayerScope:(long long)a0;
- (long long)playerScope;
- (BOOL)hasFriendsButton;
- (BOOL)needsShowMoreCell;
- (void)revealMoreItemsInCollectionView:(id)a0 section:(long long)a1 completion:(id /* block */)a2;
- (BOOL)needsShowcaseCell;
- (BOOL)isShowcaseIndexPath:(id)a0;
- (BOOL)isShowMoreIndexPath:(id)a0;
- (void)sectionHeaderButtonPressed:(id)a0;
- (void)showMoreInCollectionView:(id)a0 section:(long long)a1;

@end
