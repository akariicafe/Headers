@class NSString, NSArray, _EKNotificationMonitor;

@interface CALNInboxNotificationMonitor : NSObject <CADModule, CALNInboxNotificationProvider>

@property (readonly, nonatomic) _EKNotificationMonitor *notificationMonitor;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *eventNotificationReferences;
@property (readonly, nonatomic) unsigned long long eventNotificationCount;

- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)didRegisterForAlarms;
- (void)removeNotificationCountChangedObserver:(id)a0 selector:(SEL)a1;
- (void)removeNotificationsLoadedObserver:(id)a0 selector:(SEL)a1;
- (id)initWithEventStoreProvider:(id)a0;
- (void)addNotificationCountChangedObserver:(id)a0 selector:(SEL)a1;
- (void)addNotificationsChangedObserver:(id)a0 selector:(SEL)a1;
- (void)addNotificationsLoadedObserver:(id)a0 selector:(SEL)a1;
- (void)activate;
- (void)removeNotificationsChangedObserver:(id)a0;
- (void).cxx_destruct;

@end
