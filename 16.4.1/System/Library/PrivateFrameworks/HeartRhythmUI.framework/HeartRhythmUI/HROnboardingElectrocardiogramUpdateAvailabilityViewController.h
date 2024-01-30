@class HRElectrocardiogramCurrentLocationOnboardingDeterminer, HRElectrocardiogramWatchAppInstallability, UIView, UILabel, HRStackedButtonView;

@interface HROnboardingElectrocardiogramUpdateAvailabilityViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (retain, nonatomic) HRElectrocardiogramCurrentLocationOnboardingDeterminer *onboardingAvailabilityDeterminer;
@property (retain, nonatomic) HRElectrocardiogramWatchAppInstallability *ecgAppInstallability;
@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UILabel *locationFooterLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;

+ (void)markElectrocardiogramUpdateAsViewed:(id)a0;

- (id)_titleFont;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)titleString;
- (id)_bodyFont;
- (id)bodyString;
- (id)_titleFontTextStyle;
- (void)setUpConstraints;
- (id)_footnoteFont;
- (void)setUpUI;
- (id)buttonTitleString;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (double)_bodyBottomToLocationTop;
- (id)_bodyFontTextStyle;
- (id)_footnoteTextStyle;
- (double)_locationFooterLastBaselineToContinueButton;
- (double)_titleBottomToBodyTop;
- (void)continueAndCheckForUpdateAvailability:(id)a0;
- (id)deviceNotSupportedBodyString;
- (id)featureDisabledBodyString;
- (id)locationFeatureIneligiblePromptBodyString;
- (id)locationFooterString;
- (id)locationNotFoundPromptBodyString;
- (id)locationNotFoundPromptTitleString;
- (id)updateFeatureIneligiblePromptBodyString;
- (id)watchOSVersionTooLowBodyString;

@end
