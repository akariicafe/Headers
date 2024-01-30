@class UIView, UIScrollView, HKRPOxygenSaturationOnboardingManager, OBLinkTrayButton, RespiratoryHealthHeroView, HKRPOxygenSaturationSettings, OBBoldTrayButton, UILabel, UIVisualEffectView;
@protocol HKRPOnboardingDelegate, BPSSetupMiniFlowControllerDelegate;

@interface HKRPOnboardingSettingsViewController : UIViewController <BPSMiniFlowStepController>

@property (nonatomic) long long style;
@property (retain, nonatomic) HKRPOxygenSaturationSettings *settings;
@property (retain, nonatomic) HKRPOxygenSaturationOnboardingManager *onboardingManager;
@property (weak, nonatomic) id<HKRPOnboardingDelegate> onboardingDelegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) RespiratoryHealthHeroView *watchView;
@property (retain, nonatomic) OBBoldTrayButton *suggestedChoiceButton;
@property (retain, nonatomic) OBLinkTrayButton *setupLaterButton;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL didLayoutSubviews;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } initialInsets;
@property (nonatomic) BOOL isInitialInsetsSet;
@property (nonatomic) BOOL isVisible;
@property (weak, nonatomic) id<BPSSetupMiniFlowControllerDelegate> miniFlowDelegate;

- (id)backgroundColor;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_localizedStringForKey:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)labelColor;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(BOOL)a0;
- (id)_headerTitleFont;
- (id)pillBackgroundColor;
- (void)_onboardWithCompletion:(id /* block */)a0;
- (void)_presentOnboardingError:(id)a0 completion:(id /* block */)a1;
- (id)initWithStyle:(long long)a0 settings:(id)a1 onboardingManager:(id)a2 onboardingDelegate:(id)a3;
- (void)layoutUI;
- (void)setInsetsIfNeeded;
- (double)_calculateHeroHorizontalMarginForViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupLaterButtonPressed:(id)a0;
- (void)suggestedChoiceButtonPressed:(id)a0;
- (id)pillBackgroundSelectedColor;
- (id)pillTitleColor;
- (void)createUI;
- (void)_installWatchAppIfNeededWithCompletion:(id /* block */)a0;
- (void)_askUserToInstallWatchAppWithCompletion:(id /* block */)a0;
- (id)pillTitleSelectedColor;

@end
