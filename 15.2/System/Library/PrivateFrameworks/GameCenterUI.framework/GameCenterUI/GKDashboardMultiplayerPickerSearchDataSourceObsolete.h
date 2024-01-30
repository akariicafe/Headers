@class NSArray, NSMutableDictionary, UISearchBar;

@interface GKDashboardMultiplayerPickerSearchDataSourceObsolete : GKCollectionDataSource

@property (copy, nonatomic) NSArray *allPlayers;
@property (copy, nonatomic) NSArray *searchPlayers;
@property (readonly, nonatomic) NSArray *selectedPlayers;
@property (readonly, nonatomic) long long maxSelectable;
@property (retain, nonatomic) NSMutableDictionary *playerStates;
@property (nonatomic, getter=isSearching) BOOL searching;
@property (weak, nonatomic) UISearchBar *searchBar;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (long long)itemCount;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)a0;
- (id)searchKeyForSection:(long long)a0;
- (void)searchTextHasChanged;
- (id)initWithSearchPlayers:(id)a0 maxSelectable:(long long)a1;

@end
