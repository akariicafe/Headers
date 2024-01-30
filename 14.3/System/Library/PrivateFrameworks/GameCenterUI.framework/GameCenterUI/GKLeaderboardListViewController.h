@class GKNoContentView, UICollectionView, NSDictionary, GKGameLayerCollectionDataSource;

@interface GKLeaderboardListViewController : GKLoadingViewController

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL showingLeaderboardSets;
@property (retain, nonatomic) GKNoContentView *noContentView;
@property (nonatomic) BOOL canSegueToScores;
@property (retain, nonatomic) GKGameLayerCollectionDataSource *dataSource;
@property (retain, nonatomic) NSDictionary *leaderboardSetAssetNames;
@property (retain, nonatomic) NSDictionary *leaderboardAssetNames;

- (void)updateLayout;
- (void)clearSelection;
- (BOOL)isLoading;
- (void).cxx_destruct;
- (BOOL)hasData;
- (void)dealloc;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)loadData;
- (void)viewWillAppear:(BOOL)a0;
- (void)hideNoContentPlaceholder;
- (void)showNoContentPlaceholderForError:(id)a0;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)donePressed:(id)a0;
- (void)configureCloseButton;
- (void)setHorizontalLayout:(BOOL)a0;
- (void)setNeedsRefresh;
- (id)initWithGameRecord:(id)a0 leaderboardSet:(id)a1;
- (void)didEnterLoadingState;
- (void)_gkRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)title;
- (void)viewDidLoad;

@end
