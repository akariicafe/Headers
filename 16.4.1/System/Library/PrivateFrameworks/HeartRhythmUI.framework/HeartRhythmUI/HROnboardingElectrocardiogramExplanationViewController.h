@class HRStackedButtonView, UILabel, NSLayoutConstraint, HRVideoPlayerView;

@interface HROnboardingElectrocardiogramExplanationViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HRVideoPlayerView *animatedWatchRhythmVideoView;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)_bodyFont;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (id)_bodyFontTextStyle;
- (void)_setUpButtonFooterView;
- (double)_titleBottomToVideoViewTop;
- (double)_videoViewBottomToBodyFirstBaseline;

@end
