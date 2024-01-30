@protocol SBHomeScreenSpotlightDismissalDelegate, BSInvalidatable;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController

@property (readonly, weak, nonatomic) id<SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate;
@property (readonly, nonatomic) id<BSInvalidatable> displayLayoutAssertion;

- (void)_setDisplayLayoutElementActive:(BOOL)a0;
- (void)dealloc;
- (unsigned long long)remoteSearchViewPresentationSource;
- (id)initWithDelegate:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)level;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
