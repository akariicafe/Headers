@class NSLayoutConstraint, UILabel, UIView, HRStackedButtonView;

@interface HROnboardingAtrialFibrillationEnableViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>

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
- (id)_footnoteFont;
- (void)setUpUI;
- (id)createHeroView;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)_bodyFontTextStyle;
- (id)_footnoteFontTextStyle;
- (double)_footnoteToButton;
- (double)_titleLastBaselineToBodyFirstBaseline;

@end
