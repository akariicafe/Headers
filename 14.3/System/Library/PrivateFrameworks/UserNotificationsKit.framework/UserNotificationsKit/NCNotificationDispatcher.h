@class NSMutableDictionary, NCNotificationDestinationsRegistry, NSHashTable, NCNotificationAlertQueue, NCLayoutLoopDetector, NSString;
@protocol NCAlertingController, NCNotificationDispatcherDelegate;

@interface NCNotificationDispatcher : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate>

@property (retain, nonatomic) NCNotificationDestinationsRegistry *destinationsRegistry;
@property (retain, nonatomic) NCNotificationAlertQueue *alertQueue;
@property (retain, nonatomic) NSMutableDictionary *sectionSettings;
@property (retain, nonatomic) NSHashTable *sourceDelegates;
@property (retain, nonatomic) NCLayoutLoopDetector *layoutDetector;
@property (retain, nonatomic) id<NCAlertingController> alertingController;
@property (weak, nonatomic) id<NCNotificationDispatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)destination:(id)a0 setAllowsNotifications:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 didPresentNotificationRequest:(id)a1;
- (void)_clearUnsafeNotification:(id)a0;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (id)notificationSectionSettingsForDestination:(id)a0;
- (void)addDispatcherSourceDelegate:(id)a0;
- (void)_didRemoveNotificationRequest:(id)a0;
- (void)destination:(id)a0 willPresentNotificationRequest:(id)a1;
- (id)init;
- (void)_registerDestination:(id)a0;
- (void).cxx_destruct;
- (void)destination:(id)a0 requestsClearingNotificationRequests:(id)a1;
- (void)setDestination:(id)a0 enabled:(BOOL)a1;
- (id)notificationSectionSettingsForDestination:(id)a0 forSectionIdentifier:(id)a1;
- (void)_didPostNotificationRequest:(id)a0;
- (void)_willPostNotificationRequest:(id)a0;
- (void)modifyNotificationWithRequest:(id)a0;
- (void)removeNotificationSectionWithIdentifier:(id)a0;
- (void)destination:(id)a0 requestPermissionToExecuteAction:(id)a1 forNotificationRequest:(id)a2 withParameters:(id)a3 completion:(id /* block */)a4;
- (void)unregisterDestination:(id)a0;
- (void)destination:(id)a0 requestsClearingNotificationRequestsFromDate:(id)a1 toDate:(id)a2 inSections:(id)a3;
- (BOOL)_shouldPostNotificationRequest:(id)a0;
- (BOOL)_isRegisteredDestination:(id)a0;
- (void)withdrawNotificationWithRequest:(id)a0;
- (void)_performOperationForRequestDestinations:(id)a0 block:(id /* block */)a1;
- (void)destination:(id)a0 requestsClearingNotificationRequests:(id)a1 fromDestinations:(id)a2;
- (void)destination:(id)a0 executeAction:(id)a1 forNotificationRequest:(id)a2 requestAuthentication:(BOOL)a3 withParameters:(id)a4 completion:(id /* block */)a5;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)a0;
- (void)destination:(id)a0 didBecomeReadyToReceiveNotificationsPassingTest:(id /* block */)a1;
- (void)destination:(id)a0 willPresentNotificationRequest:(id)a1 suppressAlerts:(BOOL)a2;
- (void)destination:(id)a0 requestsClearingNotificationRequestsInSections:(id)a1;
- (void)postNotificationWithRequest:(id)a0;
- (id)initWithAlertingController:(id)a0;
- (void)destination:(id)a0 setDeliverQuietly:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)a1;
- (void)updateNotificationSectionSettings:(id)a0;
- (void)_registerAlertDestination:(id)a0;
- (void)registerDestination:(id)a0;
- (void)destination:(id)a0 didDismissNotificationRequest:(id)a1;
- (void)removeDispatcherSourceDelegate:(id)a0;
- (void)destination:(id)a0 setAllowsCriticalAlerts:(BOOL)a1 forSectionIdentifier:(id)a2;

@end
