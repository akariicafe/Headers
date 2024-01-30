@class NSLayoutConstraint, UILabel, UIView, HRStackedButtonView;

@interface HROnboardingAtrialFibrillationEnableViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UILabel *footnoteLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;

- (id)_titleFont;
- (void).cxx_destruct;
- (id)_bodyFont;
- (id)_titleFontTextStyle;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)createHeroView;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (id)_bodyFontTextStyle;
- (id)_footnoteFont;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (double)_footnoteToButton;
- (id)_footnoteFontTextStyle;

@end
