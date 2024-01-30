@class HRStackedButtonView, UILabel, NSLayoutConstraint, HRVideoPlayerView;

@interface HROnboardingElectrocardiogramExplanationViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HRVideoPlayerView *animatedWatchRhythmVideoView;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setUpUI;
- (void).cxx_destruct;
- (void)setUpConstraints;
- (id)_bodyFont;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)_bodyFontTextStyle;
- (void)_setUpButtonFooterView;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (double)_titleBottomToVideoViewTop;
- (double)_videoViewBottomToBodyFirstBaseline;

@end
