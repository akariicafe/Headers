@class UIScrollView, NSLayoutConstraint, UIView;
@protocol HROnboardingPageViewControllerDelegate;

@interface HROnboardingBaseViewController : HKViewController

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint;
@property (readonly, nonatomic, getter=isOnboarding) BOOL onboarding;
@property (nonatomic) long long upgradingFromAlgorithmVersion;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long leftButtonType;
@property (nonatomic) long long rightButtonType;
@property (retain, nonatomic) id<HROnboardingPageViewControllerDelegate> delegate;

- (id)titleFont;
- (void).cxx_destruct;
- (id)_buttonForButtonType:(long long)a0;
- (void)closeButtonTapped:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)_skipButton;
- (id)_titleFontTextStyle;
- (void)viewWillAppear:(BOOL)a0;
- (id)_cancelButton;
- (id)_closeButton;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (double)contentTop;
- (void)setFooterView:(id)a0 insets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)removeFooterView;
- (id)initForOnboarding:(BOOL)a0;
- (double)_titleTopToFirstBaselineLeading;
- (void)_setUpNavigationBar;
- (void)updateUserInterfaceForStyle:(long long)a0;
- (void)_adjustScrollViewForFooterView;
- (id)_onboardingElectrocardiogramCancelButton;
- (id)_onboardingAtrialFibrillationDetectionCancelButton;
- (void)onboardingElectrocardiogramCancelButtonTapped:(id)a0;
- (void)onboardingAtrialFibrillationDetectionCancelButtonTapped:(id)a0;
- (void)skipButtonTapped:(id)a0;
- (void)presentAlertWithMessage:(id)a0;
- (void)presentLearnMoreAlertWithMessage:(id)a0 learnMoreTapped:(id /* block */)a1;
- (double)titleTopToFirstBaseline;

@end
