@class NCNotificationManagementViewPresenter, NSString, NSURL, NCNotificationRequest, NCNotificationManagementView;
@protocol NCNotificationManagementControllerSettingsDelegate;

@interface NCNotificationManagementViewController : UIViewController <NCNotificationManagementControllerSettingsDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationManagementController> {
    NCNotificationManagementView *_platterView;
    BOOL _isDeliveredQuietly;
    NCNotificationManagementViewPresenter *_viewPresenter;
}

@property (retain, nonatomic) NCNotificationRequest *request;
@property (retain, nonatomic) NSURL *settingsURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationManagementControllerSettingsDelegate> settingsDelegate;

+ (id)notificationManagementAlertControllerForNotificationRequest:(id)a0 withPresentingView:(id)a1 settingsDelegate:(id)a2;

- (id)_sectionSettingsForSectionIdentifier:(id)a0;
- (id)initWithRequest:(id)a0;
- (void)viewDidLoad;
- (BOOL)canResignFirstResponder;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)notificationManagementController:(id)a0 setAllowsCriticalAlerts:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementViewPresenter:(id)a0 setScheduledDelivery:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementController:(id)a0 setAllowsNotifications:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementViewPresenter:(id)a0 setAllowsCriticalAlerts:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementController:(id)a0 setDeliverQuietly:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)loadView;
- (void)notificationManagementViewPresenter:(id)a0 setDeliverQuietly:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementController:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (id)notificationManagementViewPresenter:(id)a0 sectionSettingsForSectionIdentifier:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)notificationManagementController:(id)a0 sectionSettingsForSectionIdentifier:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)notificationManagementController:(id)a0 setScheduledDelivery:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementViewPresenter:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementViewPresenter:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forNotificationRequest:(id)a3 withSectionIdentifier:(id)a4 threadIdentifier:(id)a5;
- (void)notificationManagementController:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forNotificationRequest:(id)a3 withSectionIdentifier:(id)a4 threadIdentifier:(id)a5;
- (void)notificationManagementViewPresenter:(id)a0 setAllowsNotifications:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (id)_newManagementView;
- (void)_deliveryButtonTapped:(id)a0;
- (void)_onOffToggleButtonTapped:(id)a0;
- (void)_setAllowsNotifications:(BOOL)a0 forNotificationRequest:(id)a1 withSectionIdentifier:(id)a2;
- (void)_setDeliverQuietly:(BOOL)a0 forNotificationRequest:(id)a1 withSectionIdentifier:(id)a2;
- (void)_setAllowsCriticalAlerts:(BOOL)a0 forNotificationRequest:(id)a1 withSectionIdentifier:(id)a2;
- (void)_setAllowsTimeSensitive:(BOOL)a0 forNotificationRequest:(id)a1 withSectionIdentifier:(id)a2;
- (void)_setMuted:(BOOL)a0 untilDate:(id)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3 threadIdentifier:(id)a4;
- (void)_setScheduledDelivery:(BOOL)a0 forNotificationRequest:(id)a1 withSectionIdentifier:(id)a2;

@end
