@protocol BSInvalidatable;

@interface _SBTodaySpotlightViewController : SBSpotlightMultiplexingViewController

@property (nonatomic) long long location;
@property (readonly, nonatomic) id<BSInvalidatable> displayLayoutAssertion;

- (void)_setDisplayLayoutElementActive:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (long long)_displayLayoutElementLevel;
- (void)dealloc;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)level;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
