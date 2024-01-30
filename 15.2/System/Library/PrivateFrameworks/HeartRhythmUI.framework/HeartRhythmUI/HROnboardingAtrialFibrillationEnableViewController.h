@class NSLayoutConstraint, UILabel, UIView, HRStackedButtonView;

@interface HROnboardingAtrialFibrillationEnableViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UILabel *footnoteLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;

- (id)_titleFont;
- (void)setUpUI;
- (void).cxx_destruct;
- (void)setUpConstraints;
- (id)_titleFontTextStyle;
- (id)_bodyFont;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (id)createHeroView;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)_footnoteFont;
- (id)_bodyFontTextStyle;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (double)_footnoteToButton;
- (id)_footnoteFontTextStyle;

@end
