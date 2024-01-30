@interface GKChallengeListViewController : GKDashboardCollectionViewController

@property (nonatomic) BOOL shouldShowPlayForChallenge;
@property (nonatomic) double startTime;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)donePressed:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (id)initWithGameRecord:(id)a0;
- (void)showNoContentPlaceholderForError:(id)a0;
- (void)configureCollectionView;
- (void)setupVisualEffect;
- (void)configureCloseButton;

@end
