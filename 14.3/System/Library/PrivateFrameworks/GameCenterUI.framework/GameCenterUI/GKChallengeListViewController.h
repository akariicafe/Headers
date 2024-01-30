@interface GKChallengeListViewController : GKDashboardCollectionViewController

@property (nonatomic) BOOL shouldShowPlayForChallenge;
@property (nonatomic) double startTime;

- (void)viewWillDisappear:(BOOL)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)configureCollectionView;
- (id)initWithGameRecord:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)showNoContentPlaceholderForError:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)donePressed:(id)a0;
- (void)configureCloseButton;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
