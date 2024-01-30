@class NSLayoutConstraint, NSString, UILabel, UIView, HRStackedButtonView;

@interface HROnboardingHeroExplanationViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate>

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
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)_bodyFont;
- (id)_titleFontTextStyle;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)viewDidLoad;
- (id)createHeroView;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)_bodyFontTextStyle;
- (void)_setUpButtonFooterView;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (double)_titleLastBaselineToBodyTop;
- (long long)stackedButtonViewLastButtonMode;
- (double)_titleTopToFirstBaselineLeading;
- (double)_titleTopToFirstBaseline;

@end
