@class _TtC12GameCenterUI13BasePresenter;

@interface GameCenterUI.FriendsListViewController : GameCenterUI.BaseJetCollectionViewController <UISearchResultsUpdating, UISearchControllerDelegate> {
    void /* unknown type, empty encoding */ friendsPresenter;
    void /* unknown type, empty encoding */ searchController;
}

@property (nonatomic, retain) _TtC12GameCenterUI13BasePresenter *dataPresenter;

- (void)didDismissSearchController:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;

@end
