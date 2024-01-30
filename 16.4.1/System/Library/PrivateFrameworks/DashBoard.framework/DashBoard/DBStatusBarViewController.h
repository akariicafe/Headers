@class UIStatusBar_Modern, DBEnvironmentConfiguration, DBStatusBarStateProvider;

@interface DBStatusBarViewController : UIViewController

@property (retain, nonatomic) DBStatusBarStateProvider *stateProvider;
@property (retain, nonatomic) UIStatusBar_Modern *statusBarView;
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;

- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_createStatusBar;
- (BOOL)hasActivePill;
- (id)initWithStateProvider:(id)a0 environmentConfiguration:(id)a1;
- (void)statusBarEdgeUpdated;

@end
