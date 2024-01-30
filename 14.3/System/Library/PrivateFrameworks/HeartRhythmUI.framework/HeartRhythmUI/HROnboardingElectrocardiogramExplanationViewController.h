@class HRStackedButtonView, UILabel, NSLayoutConstraint, HRVideoPlayerView;

@interface HROnboardingElectrocardiogramExplanationViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HRVideoPlayerView *animatedWatchRhythmVideoView;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)_bodyFont;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)viewDidLoad;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (id)_bodyFontTextStyle;
- (void)_setUpButtonFooterView;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (double)_titleBottomToVideoViewTop;
- (double)_videoViewBottomToBodyFirstBaseline;

@end
