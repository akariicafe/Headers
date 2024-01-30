@class UIAlertController, NSString;
@protocol NCNotificationManagementViewPresenterDelegate;

@interface NCNotificationManagementViewPresenter : NSObject <NCNotificationManagementControllerSettingsDelegate>

@property (retain, nonatomic) UIAlertController *notificationManagementAlertViewController;
@property (weak, nonatomic) id<NCNotificationManagementViewPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dismissManagementViewIfPresentedAnimated:(BOOL)a0;
- (void)notificationManagementController:(id)a0 setAllowsCriticalAlerts:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementControllerDidDismissManagementView:(id)a0;
- (void)notificationManagementController:(id)a0 setAllowsNotifications:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementController:(id)a0 setScheduledDelivery:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementController:(id)a0 setDeliverQuietly:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (id)notificationManagementControllerRequestsSystemSettings:(id)a0;
- (void)presentNotificationManagementViewType:(unsigned long long)a0 forNotificationRequest:(id)a1 withPresentingViewController:(id)a2 withPresentingView:(id)a3;
- (id)notificationManagementController:(id)a0 sectionSettingsForSectionIdentifier:(id)a1;
- (void)notificationManagementController:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forNotificationRequest:(id)a3 withSectionIdentifier:(id)a4 threadIdentifier:(id)a5;
- (void)notificationManagementController:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void).cxx_destruct;

@end
