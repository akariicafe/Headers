@class UIView, UIImageView, STSetupAssistantUsageDetailsCoordinator, UILabel, STWeeklyReportViewController;

@interface STSetupAssistantPosedDeviceViewController : UIViewController

@property (readonly) BOOL isiPad;
@property (readonly) long long deviceSize;
@property (readonly) STSetupAssistantUsageDetailsCoordinator *coordinator;
@property (readonly) STWeeklyReportViewController *reportViewController;
@property (retain) UIImageView *deviceWithScreenImageView;
@property (retain) UILabel *screenTimeLabel;
@property (retain) UILabel *manageScreenTimeLabel;
@property (retain) UIView *screenTimeLabelTopLayoutGuide;
@property (retain) UIView *manageScreenTimeLabelBottomLayoutGuide;

- (BOOL)_isRTL;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)_stSetupAssistantPosedDeviceViewControllerCommonInit;
- (id)_deviceWithScreenImage;
- (double)_screenTimeTopOffset;
- (double)_screenTimeLeadingOffset;
- (double)_screenTimeTrailingOffset;
- (id)_deviceBezelImageName;
- (double)_notificationWidth;
- (double)_notificationTopOffset;

@end
