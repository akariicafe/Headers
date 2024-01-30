@class NSLayoutConstraint, NSString, UILabel, UIView, HRStackedButtonView;

@interface HROnboardingHeroExplanationViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *bodyString;
@property (readonly, nonatomic) NSString *buttonTitleString;
@property (nonatomic) long long textAlignment;

- (void)viewDidLoad;
- (id)_titleFont;
- (void)viewDidLayoutSubviews;
- (void)setUpUI;
- (void).cxx_destruct;
- (void)setUpConstraints;
- (id)_titleFontTextStyle;
- (id)_bodyFont;
- (double)_titleTopToFirstBaselineLeading;
- (id)createHeroView;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)_bodyFontTextStyle;
- (void)_setUpButtonFooterView;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (double)_titleLastBaselineToBodyTop;
- (long long)stackedButtonViewLastButtonMode;
- (double)_titleTopToFirstBaseline;

@end
