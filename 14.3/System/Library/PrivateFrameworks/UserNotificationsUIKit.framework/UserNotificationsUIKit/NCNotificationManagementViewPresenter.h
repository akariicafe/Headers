@class UIAlertController, NSString;
@protocol NCNotificationManagementViewPresenterDelegate;

@interface NCNotificationManagementViewPresenter : NSObject <NCNotificationManagementControllerSettingsDelegate>

@property (retain, nonatomic) UIAlertController *notificationManagementAlertViewController;
@property (weak, nonatomic) id<NCNotificationManagementViewPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)notificationManagementController:(id)a0 setAllowsCriticalAlerts:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementControllerDidDismissManagementView:(id)a0;
- (BOOL)dismissManagementViewIfPresentedAnimated:(BOOL)a0;
- (id)notificationManagementController:(id)a0 sectionSettingsForSectionIdentifier:(id)a1;
- (void)notificationManagementController:(id)a0 setAllowsNotifications:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)notificationManagementController:(id)a0 setDeliverQuietly:(BOOL)a1 forNotificationRequest:(id)a2 withSectionIdentifier:(id)a3;
- (void)presentNotificationManagementViewType:(unsigned long long)a0 forNotificationRequest:(id)a1 withPresentingViewController:(id)a2 withPresentingView:(id)a3;

@end
