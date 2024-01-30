@class NCNotificationDestinationsRegistry, NSString, NCNotificationRequest, NCNotificationCollapsingQueue, BSServiceConnectionEndpoint;
@protocol NCNotificationAlertDestinationDelegate;

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationAlertDestination>

@property (retain, nonatomic) NCNotificationCollapsingQueue *queue;
@property (retain, nonatomic) NCNotificationRequest *coalescingRequest;
@property (retain, nonatomic) NCNotificationDestinationsRegistry *destinationsRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationAlertDestinationDelegate> delegate;
@property (readonly, nonatomic, getter=isAlertDestination) BOOL alertDestination;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;

- (void)withdrawNotificationRequest:(id)a0;
- (BOOL)canReceiveNotificationRequest:(id)a0;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)a0;
- (void)destination:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 requestPermissionToExecuteAction:(id)a1 forNotificationRequest:(id)a2 withParameters:(id)a3 completion:(id /* block */)a4;
- (void)_postEnqueuedNotificationRequestsCoalescingWith:(id)a0;
- (BOOL)_postNotificationRequest:(id)a0;
- (void)setDestination:(id)a0 enabled:(BOOL)a1;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (void)destination:(id)a0 requestsClearingNotificationRequestsInSections:(id)a1;
- (id)notificationSectionSettingsForDestination:(id)a0 forSectionIdentifier:(id)a1;
- (BOOL)isRegisteredDestination:(id)a0;
- (id)notificationSystemSettingsForDestination:(id)a0;
- (id)destinationsForRequestDestinations:(id)a0;
- (void)_postNextNotificationRequest;
- (void)destination:(id)a0 requestsClearingNotificationRequests:(id)a1 fromDestinations:(id)a2;
- (void)destination:(id)a0 setDeliverQuietly:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)modifyNotificationRequest:(id)a0;
- (void)registerDestination:(id)a0;
- (void)destination:(id)a0 didBecomeReadyToReceiveNotificationsPassingTest:(id /* block */)a1;
- (void)destination:(id)a0 setAllowsDirectMessages:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)a1;
- (BOOL)_destinations:(id)a0 canReceiveNotificationRequest:(id)a1;
- (void)destination:(id)a0 setAllowsNotifications:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)postNotificationRequest:(id)a0;
- (void)destination:(id)a0 setAllowsCriticalAlerts:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 willDismissNotificationRequest:(id)a1;
- (void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)a0;
- (void)destination:(id)a0 requestsClearingNotificationRequests:(id)a1;
- (void)destination:(id)a0 willPresentNotificationRequest:(id)a1;
- (BOOL)_readyToReceiveForNotificationRequest:(id)a0;
- (void)destination:(id)a0 requestsClearingNotificationRequestsFromDate:(id)a1 toDate:(id)a2 inSections:(id)a3;
- (void)destination:(id)a0 didPresentNotificationRequest:(id)a1;
- (void)destination:(id)a0 setNotificationSystemSettings:(id)a1;
- (void)setDestination:(id)a0 ready:(BOOL)a1;
- (id)init;
- (void)_postNextNotificationRequestPassingTest:(id /* block */)a0;
- (void)destination:(id)a0 executeAction:(id)a1 forNotificationRequest:(id)a2 requestAuthentication:(BOOL)a3 withParameters:(id)a4 completion:(id /* block */)a5;
- (void)destination:(id)a0 setScheduledDelivery:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)unregisterDestination:(id)a0;
- (id)notificationSectionSettingsForDestination:(id)a0;
- (void)destination:(id)a0 setSystemScheduledDeliveryEnabled:(BOOL)a1 scheduledDeliveryTimes:(id)a2;
- (void)destination:(id)a0 willPresentNotificationRequest:(id)a1 suppressAlerts:(BOOL)a2;
- (BOOL)_performDestinationOperationForRequest:(id)a0 block:(id /* block */)a1;
- (void)destination:(id)a0 didDismissNotificationRequest:(id)a1;
- (void).cxx_destruct;
- (void)destination:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forSectionIdentifier:(id)a3 threadIdentifier:(id)a4;

@end
