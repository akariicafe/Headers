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

- (id)_titleFont;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)_bodyFont;
- (id)_titleFontTextStyle;
- (void)setUpConstraints;
- (double)_titleTopToFirstBaselineLeading;
- (void)setUpUI;
- (id)createHeroView;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (long long)stackedButtonViewLastButtonMode;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (id)_bodyFontTextStyle;
- (void)_setUpButtonFooterView;
- (double)_titleLastBaselineToBodyTop;
- (double)_titleTopToFirstBaseline;

@end
