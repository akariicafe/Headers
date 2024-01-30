@class UIView, NSString, HRStackedButtonView, NSArray, UIButton, HKAnalyticsEventSubmissionManager, NSLayoutConstraint, UILabel, NSNumber;

@interface HROnboardingAtrialFibrillationIntroViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate, UITextFieldDelegate>

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
@property (retain, nonatomic) HKAnalyticsEventSubmissionManager *analyticsEventSubmissionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_titleFont;
- (void).cxx_destruct;
- (id)titleString;
- (id)_bodyFont;
- (id)bodyString;
- (id)_titleFontTextStyle;
- (void)learnMoreButtonTapped:(id)a0;
- (void)setUpConstraints;
- (id)_footnoteFont;
- (void)setUpUI;
- (id)buttonTitleString;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)_createHeroView;
- (id)learnMoreString;
- (double)_assetImageBottomToTitleFirstBaseline;
- (id)_bodyFontTextStyle;
- (id)_createLearnMoreExpandedView;
- (double)_footnoteLeading;
- (id)_footnoteTextStyle;
- (void)_isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForActiveWatch:(id /* block */)a0;
- (double)_learnMoreContentViewLastBaselineToContinueButton;
- (void)_presentFeatureAlertWithMessage:(id)a0;
- (void)_presentLocationNotFoundAlert;
- (void)_setStackedButtonViewAsFooterView;
- (void)_setUpLearnMoreConstraints;
- (void)_setUpLearnMoreViews;
- (void)_setUpStackedButtonView;
- (void)_submitOnboardingUIErrorEventWithCountryCode:(id)a0 onboardingEligibility:(id)a1;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (void)_updateViewsForContentExpansionState:(BOOL)a0;
- (double)_viewLastBaselineToContinueButton;
- (id)featureDisabledBodyString;
- (id)footnoteString;
- (id)locationFeatureAlertAckButtonString;
- (id)locationFeatureIneligiblePromptBodyString;
- (id)locationNotFoundPromptMessageString;
- (id)locationNotFoundPromptTitleString;
- (void)presentLearnMoreAlertWithFeatureDisabledMessage;
- (id)seedExpiredBodyString;
- (id)watchOSVersionTooLowBodyString;

@end
