@class NSArray;

@interface GameCenterUI.AchievementsListViewController : GameCenterUI.BaseViewController <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ bootstrapPresenter;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ gamesListStatePresenter;
    void /* unknown type, empty encoding */ achivementsStatePresenter;
    void /* unknown type, empty encoding */ gamesListCollectionView;
    void /* unknown type, empty encoding */ achievementsCollectionView;
    void /* unknown type, empty encoding */ gamesListDiffableDataSource;
    void /* unknown type, empty encoding */ achievementsCollectionContent;
    void /* unknown type, empty encoding */ gamesListComponents;
    void /* unknown type, empty encoding */ gamesListBackgroundView;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ emptyStateView;
    void /* unknown type, empty encoding */ showLoadingViewTimer;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 didUpdateFocusInContext:(id)a1 withAnimationCoordinator:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
