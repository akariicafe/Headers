@class HKHeartRhythmAvailability, UILabel, UIView, HRStackedButtonView;

@interface HROnboardingElectrocardiogramUpdateAvailabilityViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (retain, nonatomic) HKHeartRhythmAvailability *availability;
@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UILabel *locationFooterLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;

+ (void)markElectrocardiogramUpdateAsViewed:(id)a0;

- (id)_titleFont;
- (void).cxx_destruct;
- (id)_bodyFont;
- (id)_titleFontTextStyle;
- (void)viewDidAppear:(BOOL)a0;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)bodyString;
- (id)titleString;
- (id)buttonTitleString;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (id)_bodyFontTextStyle;
- (id)_footnoteFont;
- (id)featureDisabledBodyString;
- (id)locationNotFoundPromptBodyString;
- (id)watchOSVersionTooLowBodyString;
- (id)deviceNotSupportedBodyString;
- (id)locationFeatureIneligiblePromptBodyString;
- (id)_footnoteTextStyle;
- (double)_titleBottomToBodyTop;
- (id)locationFooterString;
- (double)_bodyBottomToLocationTop;
- (double)_locationFooterLastBaselineToContinueButton;
- (void)continueAndCheckForUpdateAvailability:(id)a0;
- (id)updateFeatureIneligiblePromptBodyString;

@end
