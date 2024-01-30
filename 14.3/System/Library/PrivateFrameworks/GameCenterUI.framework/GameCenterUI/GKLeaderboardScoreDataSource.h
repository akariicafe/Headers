@class GKLeaderboardAddFriendsCell, NSArray, NSString, UICollectionView, NSSet, GKLeaderboard, GKLeaderboardEntry;
@protocol GKLeaderboardScoreDelegate;

@interface GKLeaderboardScoreDataSource : GKGameLayerCollectionDataSource

@property (retain, nonatomic) NSArray *entries;
@property (nonatomic) BOOL isLoadingData;
@property (nonatomic) BOOL isLoadingNextData;
@property (nonatomic) BOOL isLoadingPreviousData;
@property (retain, nonatomic) NSString *additionalNextDataLoadToken;
@property (retain, nonatomic) NSString *additionalPreviousDataLoadToken;
@property (nonatomic) long long topLoadingCellItem;
@property (nonatomic) long long bottomLoadingCellItem;
@property (nonatomic) long long addFriendCellItem;
@property (nonatomic) long long noFriendsCellItem;
@property (nonatomic) long long maxRange;
@property (retain, nonatomic) GKLeaderboardEntry *localPlayerEntry;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long friendCount;
@property (nonatomic) BOOL firstLoad;
@property (retain, nonatomic) NSSet *localPlayerFriendIDs;
@property (retain, nonatomic) GKLeaderboardAddFriendsCell *sizingAddFriendsCell;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (nonatomic) long long playerScope;
@property (nonatomic) long long timeScope;
@property (nonatomic) BOOL restrictToFriendsOnly;
@property (nonatomic) long long leaderboardOccurrence;
@property (weak, nonatomic) id<GKLeaderboardScoreDelegate> leaderboardScoreDelegate;
@property (nonatomic) long long startingRank;
@property (nonatomic) BOOL autoScrollToLocalPlayerPosition;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)processEntries:(id)a0 localPlayerEntry:(id)a1 totalPlayerCount:(long long)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (void)loadMoreDataWithStartIndex:(long long)a0 completionHandler:(id /* block */)a1;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (id)makeContextMenuForCell:(id)a0 withScore:(id)a1;
- (id)targetedPreviewForUIContextMenuConfiguration:(id)a0 inCollectionView:(id)a1;
- (id)localPlayerEntryIndexPath;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)hasData;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (double)cellSpacing;
- (void)handleSelectionInCollectionView:(id)a0 forItemAtIndexPath:(id)a1;
- (void)setupCollectionView:(id)a0;
- (id)initWithGameRecord:(id)a0 leaderboard:(id)a1;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)itemForIndexPath:(id)a0;
- (long long)itemCount;
- (void)loadInitialDataWithCompletionHandler:(id /* block */)a0;

@end
