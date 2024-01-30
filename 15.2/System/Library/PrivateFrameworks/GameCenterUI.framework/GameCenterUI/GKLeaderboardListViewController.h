@class GKNoContentView, UICollectionView, NSDictionary, GKGameLayerCollectionDataSource;

@interface GKLeaderboardListViewController : GKLoadingViewController

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL showingLeaderboardSets;
@property (retain, nonatomic) GKNoContentView *noContentView;
@property (nonatomic) BOOL canSegueToScores;
@property (retain, nonatomic) GKGameLayerCollectionDataSource *dataSource;
@property (retain, nonatomic) NSDictionary *leaderboardSetAssetNames;
@property (retain, nonatomic) NSDictionary *leaderboardAssetNames;

- (void)clearSelection;
- (BOOL)isLoading;
- (void)updateLayout;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadData;
- (void)viewWillDisappear:(BOOL)a0;
- (id)title;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setHorizontalLayout:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)hasData;
- (void)didEnterLoadingState;
- (void)donePressed:(id)a0;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)setNeedsRefresh;
- (id)initWithGameRecord:(id)a0 leaderboardSet:(id)a1;
- (void)hideNoContentPlaceholder;
- (void)showNoContentPlaceholderForError:(id)a0;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)_gkRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)setupVisualEffect;
- (void)configureCloseButton;

@end
