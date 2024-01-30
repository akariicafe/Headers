@interface GKDetailViewController : GKDashboardCollectionViewController

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)reportProblemAboutPlayer:(id)a0;
- (void)shareAchievement:(id)a0 sendingView:(id)a1;
- (void)shareScore:(id)a0 fromLeaderboard:(id)a1 sendingView:(id)a2;

@end
