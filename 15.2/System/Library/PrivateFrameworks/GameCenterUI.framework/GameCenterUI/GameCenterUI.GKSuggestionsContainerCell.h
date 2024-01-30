@class NSString;

@interface GameCenterUI.GKSuggestionsContainerCell : GameCenterUI.GKSuggestionsContainerBaseCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, GameCenterUI.GKSuggestionsPlayerSelectionProxy, GameCenterUI.GKPickerGroupCellProxy> {
    void /* unknown type, empty encoding */ dataSourceIdentifier;
    void /* unknown type, empty encoding */ suggestionsDelegate;
    void /* unknown type, empty encoding */ nearbyPlayers;
    void /* unknown type, empty encoding */ suggestionsDataSource;
    void /* unknown type, empty encoding */ horizontalInset;
    void /* unknown type, empty encoding */ dataLoaded;
    void /* unknown type, empty encoding */ nearbyIconTapHandler;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) double defaultCellHeight;

@property (nonatomic, weak) void /* unknown type, empty encoding */ suggestionsCollectionView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ containerView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ presentationViewController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ containerViewLeadingConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ containerViewTrailingConstraint;
@property (nonatomic, copy) id /* block */ nearbyIconTapHandler;
@property (nonatomic, readonly) BOOL canBecomeFocused;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)awakeFromNib;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleLongPressGesture:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)playerIsSelectable:(id)a0;
- (void)updateNearbyPlayers:(id)a0;
- (void)configureWithDelegate:(id)a0 nearbyPlayers:(id)a1;
- (void)donateGroupToPeopleSuggester:(id)a0;
- (void)didSelectPlayerGroup:(id)a0 indexPath:(id)a1 dataSourceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)updateVisibleItemsWithPlayers:(id)a0 excludedIndexPath:(id)a1;
- (void)didSelectPlayers:(id)a0 indexPath:(id)a1 dataSourceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)didDeselectPlayerGroup:(id)a0 indexPath:(id)a1 dataSourceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)didDeselectPlayers:(id)a0 indexPath:(id)a1 dataSourceIdentifier:(id)a2 completion:(id /* block */)a3;
- (BOOL)playerIsSelected:(id)a0;
- (long long)getSelectedPlayerCount;
- (long long)getMaxPlayerCount;
- (void)didExceedAvailablePlayers;
- (id)getSuggestedPlayerGroups;
- (void)didAttemptSelectingAlreadySelectedPlayers:(id)a0 inGroup:(id)a1;

@end
