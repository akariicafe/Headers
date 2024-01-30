@class UIView, UIScrollView, HKRPOxygenSaturationOnboardingManager, OBLinkTrayButton, NSString, RespiratoryHealthHeroView, HKRPOxygenSaturationSettings, OBBoldTrayButton, UILabel, UIVisualEffectView;
@protocol HKRPOnboardingDelegate, BPSSetupMiniFlowControllerDelegate;

@interface HKRPOnboardingSettingsViewController : UIViewController <UIScrollViewDelegate, BPSMiniFlowStepController>

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BPSSetupMiniFlowControllerDelegate> miniFlowDelegate;

- (void)viewSafeAreaInsetsDidChange;
- (id)backgroundColor;
- (void)scrollViewDidScroll:(id)a0;
- (id)_localizedStringForKey:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)labelColor;
- (id)_headerTitleFont;
- (id)pillBackgroundColor;
- (void)_askUserToInstallWatchAppWithCompletion:(id /* block */)a0;
- (double)_calculateHeroHorizontalMarginForViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_installWatchAppIfNeededWithCompletion:(id /* block */)a0;
- (void)_onboardWithCompletion:(id /* block */)a0;
- (void)_presentOnboardingError:(id)a0 completion:(id /* block */)a1;
- (void)createUI;
- (id)initWithStyle:(long long)a0 settings:(id)a1 onboardingManager:(id)a2 onboardingDelegate:(id)a3;
- (void)layoutUI;
- (id)pillBackgroundSelectedColor;
- (id)pillTitleColor;
- (id)pillTitleSelectedColor;
- (void)setInsetsIfNeeded;
- (void)setupLaterButtonPressed:(id)a0;
- (void)suggestedChoiceButtonPressed:(id)a0;

@end
