@class HRVideoPlayerView;

@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingHeroExplanationViewController

@property (retain, nonatomic) HRVideoPlayerView *videoPlayerView;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setUpUI;
- (id)bodyString;
- (id)titleString;
- (id)createHeroView;
- (id)buttonTitleString;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (long long)stackedButtonViewLastButtonMode;

@end
