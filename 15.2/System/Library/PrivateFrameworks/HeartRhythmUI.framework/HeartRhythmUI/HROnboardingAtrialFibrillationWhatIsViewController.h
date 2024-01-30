@class HRVideoPlayerView;

@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingHeroExplanationViewController

@property (retain, nonatomic) HRVideoPlayerView *videoPlayerView;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setUpUI;
- (void).cxx_destruct;
- (id)titleString;
- (id)bodyString;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (id)createHeroView;
- (id)buttonTitleString;
- (long long)stackedButtonViewLastButtonMode;

@end
