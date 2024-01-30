@class NSString;
@protocol CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, CALNDataSourceEventRepresentationProvider, CALNRemoteMutator, EKEventStoreProvider;

@interface CALNEventCanceledNotificationEKDataSource : NSObject <CALNEventCanceledNotificationDataSource>

@property (readonly, nonatomic) id<EKEventStoreProvider> eventStoreProvider;
@property (readonly, nonatomic) id<CALNInboxNotificationProvider> inboxNotificationProvider;
@property (readonly, nonatomic) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (readonly, nonatomic) id<CALNRemoteMutator> remoteMutator;
@property (readonly, nonatomic) id<CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCanceledEventNotificationWithSourceClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)fetchEventCanceledNotificationSourceClientIdentifiers:(id)a0;
- (id)fetchEventCanceledNotificationWithSourceClientIdentifier:(id)a0;
- (id)_notificationInfoFromNotification:(id)a0 inEventStore:(id)a1;
- (id)fetchEventCanceledNotifications;
- (void)deleteCanceledEventWithSourceClientIdentifier:(id)a0;
- (id)initWithEventStoreProvider:(id)a0 inboxNotificationProvider:(id)a1 notificationReferenceProvider:(id)a2 remoteMutator:(id)a3 dataSourceEventRepresentationProvider:(id)a4;

@end
