@class HRVideoPlayerView;

@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingHeroExplanationViewController

@property (retain, nonatomic) HRVideoPlayerView *videoPlayerView;

- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)titleString;
- (id)bodyString;
- (void)setUpUI;
- (id)buttonTitleString;
- (id)createHeroView;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (long long)stackedButtonViewLastButtonMode;

@end
