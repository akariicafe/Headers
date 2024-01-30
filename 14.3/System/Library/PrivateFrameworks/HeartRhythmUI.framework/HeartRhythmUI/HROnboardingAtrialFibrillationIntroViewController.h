@class UIView, NSString, HRStackedButtonView, HKHeartRhythmAvailability, NSArray, UIButton, NSLayoutConstraint, NSNumber, UILabel;

@interface HROnboardingAtrialFibrillationIntroViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate, UITextFieldDelegate>

@property (retain, nonatomic) HKHeartRhythmAvailability *availability;
@property (retain, nonatomic) NSNumber *activeWatchNeedsLocationCheck;
@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UILabel *footnoteLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) UIButton *learnMoreButton;
@property (nonatomic) BOOL learnMoreContentExpanded;
@property (retain, nonatomic) UIView *learnMoreContentView;
@property (retain, nonatomic) NSArray *learnMoreCollapsedConstraints;
@property (retain, nonatomic) NSArray *learnMoreExpandedConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_titleFont;
- (void).cxx_destruct;
- (id)_bodyFont;
- (id)_titleFontTextStyle;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)bodyString;
- (id)titleString;
- (void)learnMoreButtonTapped:(id)a0;
- (id)buttonTitleString;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (id)_bodyFontTextStyle;
- (void)_setStackedButtonViewAsFooterView;
- (void)_setUpStackedButtonView;
- (id)_footnoteFont;
- (id)_createHeroView;
- (id)footnoteString;
- (void)_setUpLearnMoreViews;
- (double)_assetImageBottomToTitleFirstBaseline;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (void)_setUpLearnMoreConstraints;
- (id)learnMoreString;
- (id)_createLearnMoreExpandedView;
- (double)_footnoteLeading;
- (double)_viewLastBaselineToContinueButton;
- (void)_updateViewsForContentExpansionState:(BOOL)a0;
- (id)locationFeatureAlertAckButtonString;
- (id)featureDisabledBodyString;
- (id)locationNotFoundPromptBodyString;
- (id)watchOSVersionTooLowBodyString;
- (id)deviceNotSupportedBodyString;
- (id)locationFeatureIneligiblePromptBodyString;
- (id)_footnoteTextStyle;
- (void)_presentFeatureAlertWithMessage:(id)a0;
- (double)_learnMoreContentViewLastBaselineToContinueButton;

@end
