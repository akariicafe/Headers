@class HKHeartRhythmAvailability, UILabel, UIView, HRStackedButtonView;

@interface HROnboardingElectrocardiogramUpdateAvailabilityViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (retain, nonatomic) HKHeartRhythmAvailability *availability;
@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UILabel *locationFooterLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;

+ (void)markElectrocardiogramUpdateAsViewed:(id)a0;

- (id)_titleFont;
- (void)setUpUI;
- (void).cxx_destruct;
- (id)titleString;
- (void)viewDidAppear:(BOOL)a0;
- (void)setUpConstraints;
- (id)_titleFontTextStyle;
- (id)_bodyFont;
- (id)bodyString;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (id)buttonTitleString;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)_footnoteFont;
- (id)_bodyFontTextStyle;
- (id)locationFooterString;
- (double)_titleBottomToBodyTop;
- (id)featureDisabledBodyString;
- (id)locationNotFoundPromptBodyString;
- (id)watchOSVersionTooLowBodyString;
- (id)deviceNotSupportedBodyString;
- (id)locationFeatureIneligiblePromptBodyString;
- (id)_footnoteTextStyle;
- (double)_bodyBottomToLocationTop;
- (double)_locationFooterLastBaselineToContinueButton;
- (void)continueAndCheckForUpdateAvailability:(id)a0;
- (id)updateFeatureIneligiblePromptBodyString;

@end
