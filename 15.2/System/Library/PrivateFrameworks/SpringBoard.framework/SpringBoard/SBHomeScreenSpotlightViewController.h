@class FBDisplayLayoutElement;
@protocol SBHomeScreenSpotlightDismissalDelegate;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController

@property (readonly, weak, nonatomic) id<SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate;
@property (readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement;

- (id)initWithDelegate:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)remoteSearchViewPresentationSource;
- (unsigned long long)level;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
