@class CSBehavior, NSString, BSServiceConnectionEndpoint, SBNCAlertingController;
@protocol NCNotificationDestinationDelegate, CSNotificationDestination, CSCarPlayStatusProviding;

@interface CSNotificationDispatcher : NSObject <CSNotificationAlertingController, SBNotificationDestination, CSNotificationDispatcher>

@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) CSBehavior *activeBehavior;
@property (weak, nonatomic) id<CSNotificationDestination> modalDestination;
@property (weak, nonatomic) id<CSNotificationDestination> listDestination;
@property (weak, nonatomic) id<CSCarPlayStatusProviding> carPlayStatusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) SBNCAlertingController *alertingController;
@property (weak, nonatomic) id<NCNotificationDestinationDelegate> delegate;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (BOOL)isNotificationContentExtensionVisible:(id)a0;
- (void)destination:(id)a0 setAllowsNotifications:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 setAllowsDirectMessages:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (BOOL)isPresentingNotificationInLongLook;
- (void)postNotificationRequest:(id)a0;
- (id)notificationSectionSettingsForDestination:(id)a0;
- (void)destination:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forSectionIdentifier:(id)a3 threadIdentifier:(id)a4;
- (void)destination:(id)a0 setSystemScheduledDeliveryEnabled:(BOOL)a1 scheduledDeliveryTimes:(id)a2;
- (void)updateNotificationSystemSettings:(id)a0 previousSystemSettings:(id)a1;
- (void)destination:(id)a0 requestPermissionToExecuteAction:(id)a1 forNotificationRequest:(id)a2 withParameters:(id)a3 completion:(id /* block */)a4;
- (void)modifyNotificationRequest:(id)a0;
- (BOOL)dismissNotificationInLongLookAnimated:(BOOL)a0;
- (void)destination:(id)a0 setDeliverQuietly:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forSectionIdentifier:(id)a2;
- (id)destination:(id)a0 notificationRequestForUUID:(id)a1;
- (void)destination:(id)a0 clearNotificationRequestsInSections:(id)a1;
- (BOOL)canReceiveNotificationRequest:(id)a0;
- (void)destination:(id)a0 setScheduledDelivery:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (void)withdrawNotificationRequest:(id)a0;
- (id)notificationSystemSettingsForDestination:(id)a0;
- (id)destination:(id)a0 settingsForSectionIdentifier:(id)a1;
- (void)destination:(id)a0 setAllowsCriticalAlerts:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void).cxx_destruct;
- (void)destination:(id)a0 clearNotificationRequestsFromIncomingSection:(id)a1;
- (void)_clearNotificationRequestsFromIncomingSection:(id)a0;
- (void)destination:(id)a0 clearNotificationRequests:(id)a1;
- (void)destination:(id)a0 clearNotificationRequestsFromDate:(id)a1 toDate:(id)a2 inSections:(id)a3;
- (BOOL)interceptsQueueRequest:(id)a0;
- (void)destination:(id)a0 performAction:(id)a1 forNotificationRequest:(id)a2 requestAuthentication:(BOOL)a3 withParameters:(id)a4 completion:(id /* block */)a5;
- (id)alertingControllerForDestination:(id)a0;
- (void)stopAllRealerts;

@end
