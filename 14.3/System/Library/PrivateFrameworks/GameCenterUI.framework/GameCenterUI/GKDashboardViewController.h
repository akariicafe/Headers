@class GKCollectionMultiDataSource, GKGameRecord, GKDashboardHeaderView, NSMutableDictionary, NSArray, GKDashboardChallengeDataSource, NSString;

@interface GKDashboardViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) GKDashboardHeaderView *headerView;
@property (retain, nonatomic) GKCollectionMultiDataSource *multiDataSource;
@property (retain, nonatomic) NSMutableDictionary *viewStateIndexes;
@property (retain, nonatomic) NSArray *titles;
@property (nonatomic) GKDashboardChallengeDataSource *challengeDataSource;
@property (nonatomic) long long viewState;
@property (nonatomic) long long leaderboardTimeScope;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (nonatomic) BOOL shouldShowPlayForChallenge;
@property (nonatomic) BOOL shouldShowPlayForTurnBasedMatch;
@property (nonatomic) BOOL shouldShowQuitForTurnBasedMatch;

- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)dealloc;
- (void)selectedSegmentChanged:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)loadData;
- (id)initWithGameRecord:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupSegmentedControl;
- (void)_gkRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)addDataSource:(id)a0 withTitle:(id)a1 forViewState:(long long)a2;
- (void)viewDidLoad;
- (void)selectDataSourceAtIndex:(long long)a0 updateCollectionView:(BOOL)a1;
- (void)showLeaderboardVC;

@end
