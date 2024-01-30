@class GKChallenge, NSArray, NSMutableDictionary;

@interface GKDashboardChallengePlayerPickerDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *players;
@property (retain, nonatomic) NSMutableDictionary *playerStates;
@property (retain, nonatomic) NSMutableDictionary *playerAchievementDates;
@property (retain, nonatomic) NSArray *searchPlayers;
@property (readonly, nonatomic) NSArray *selectedPlayers;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)clearSelection;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)itemCount;
- (double)preferredCollectionHeight;
- (id)currentPlayers;
- (void)setupCollectionView:(id)a0;
- (id)itemForIndexPath:(id)a0;
- (id)sectionHeaderText;
- (id)initWithChallenge:(id)a0;
- (id)playerForIndexPath:(id)a0;
- (id)searchKeyForSection:(long long)a0;
- (void)searchTextHasChanged;
- (id)indexPathForPlayer:(id)a0;

@end
