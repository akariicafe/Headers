@class HRMiniTilePlatterView, UILabel, NSLayoutConstraint, HRStackedButtonView;
@protocol HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate;

@interface HROnboardingElectrocardiogramUpdateCompleteViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (weak, nonatomic) id<HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate> electrocardiogramDelegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRMiniTilePlatterView *otherDevicesTile;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;

- (void)viewDidLoad;
- (id)_titleFont;
- (void).cxx_destruct;
- (id)titleString;
- (void)_setUpUI;
- (void)_setUpConstraints;
- (id)_titleFontTextStyle;
- (id)_bodyFont;
- (id)bodyString;
- (id)buttonTitleString;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)_bodyFontTextStyle;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1 electrocardiogramDelegate:(id)a2;
- (id)otherDevicesWithUpdateAvailable;
- (id)otherDevicesTileTitle;
- (id)otherDevicesTileBody;
- (id)otherDevicesTileAction;
- (void)_showDevicesInWatchAppTapped:(id)a0;

@end
