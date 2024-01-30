@class UIStackView, NSString, NSHashTable, UIView, HRStackedButtonView, NSArray, NSLayoutConstraint, UILabel;

@interface HROnboardingBulletPointViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIStackView *bulletPointsView;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) UIView *lastBulletPointView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) NSHashTable *bulletPointBodyLabels;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *bodyString;
@property (readonly, nonatomic) NSArray *bulletPoints;
@property (readonly, nonatomic) NSString *buttonTitleString;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)setUpUI;
- (void).cxx_destruct;
- (void)setUpConstraints;
- (id)_bodyFont;
- (void)updateUserInterfaceForStyle:(long long)a0;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (void)_setUpButtonFooterView;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (id)_subheadlineFont;
- (void)_setupBulletPointViews;
- (struct CGSize { double x0; double x1; })_bulletImageSize;
- (id)_boldSubheadlineFont;
- (double)_cannotDoHeaderLastBaselineToCannotDoBodyFirstBaseline;

@end
