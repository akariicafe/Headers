@class UIStackView, NSString, NSHashTable, UIView, HRStackedButtonView, NSArray, NSLayoutConstraint, UILabel;

@interface HROnboardingBulletPointViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate>

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

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)_bodyFont;
- (void)viewWillAppear:(BOOL)a0;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)viewDidLoad;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (void)_setUpButtonFooterView;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (void)updateUserInterfaceForStyle:(long long)a0;
- (void)_setupBulletPointViews;
- (struct CGSize { double x0; double x1; })_bulletImageSize;
- (id)_boldSubheadlineFont;
- (id)_subheadlineFont;
- (double)_cannotDoHeaderLastBaselineToCannotDoBodyFirstBaseline;

@end
