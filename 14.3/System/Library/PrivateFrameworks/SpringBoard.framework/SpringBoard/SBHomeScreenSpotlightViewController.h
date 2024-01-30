@class FBDisplayLayoutElement;
@protocol SBHomeScreenSpotlightDismissalDelegate;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController

@property (readonly, weak, nonatomic) id<SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate;
@property (readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement;

- (void).cxx_destruct;
- (unsigned long long)level;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
