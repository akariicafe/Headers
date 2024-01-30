@class NSString, NCNotificationRequest;
@protocol NCNotificationManagementControllerSettingsDelegate;

@interface NCNotificationManagementAlertController : UIAlertController <NCNotificationManagementController>

@property (retain, nonatomic) NCNotificationRequest *request;
@property (weak, nonatomic) id<NCNotificationManagementControllerSettingsDelegate> settingsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (void)_configureView;
- (id)initWithRequest:(id)a0 withPresentingView:(id)a1 settingsDelegate:(id)a2;

@end
