@class HRMiniTilePlatterView, UILabel, NSLayoutConstraint, HRStackedButtonView;
@protocol HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate;

@interface HROnboardingElectrocardiogramUpdateCompleteViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (weak, nonatomic) id<HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate> electrocardiogramDelegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRMiniTilePlatterView *otherDevicesTile;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;

- (id)_titleFont;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)titleString;
- (void)_setUpConstraints;
- (id)_bodyFont;
- (id)bodyString;
- (id)_titleFontTextStyle;
- (void)_setUpUI;
- (id)buttonTitleString;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)otherDevicesWithUpdateAvailable;
- (id)_bodyFontTextStyle;
- (void)_showDevicesInWatchAppTapped:(id)a0;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1 electrocardiogramDelegate:(id)a2;
- (id)otherDevicesTileAction;
- (id)otherDevicesTileBody;
- (id)otherDevicesTileTitle;

@end
