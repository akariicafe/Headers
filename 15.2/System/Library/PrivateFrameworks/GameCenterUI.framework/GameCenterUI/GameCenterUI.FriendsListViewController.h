@interface GameCenterUI.FriendsListViewController : GameCenterUI.BaseCollectionViewController <UISearchResultsUpdating, UISearchControllerDelegate> {
    void /* unknown type, empty encoding */ bootstrapPresenter;
    void /* unknown type, empty encoding */ statePresenter;
    void /* unknown type, empty encoding */ compositionalLayout;
    void /* unknown type, empty encoding */ diffableDataSource;
    void /* unknown type, empty encoding */ components;
    void /* unknown type, empty encoding */ searchController;
}

- (void)didDismissSearchController:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
