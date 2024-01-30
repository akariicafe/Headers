@class NSString;
@protocol CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, CALNDataSourceEventRepresentationProvider, CALNRemoteMutator, EKEventStoreProvider;

@interface CALNEventInvitationNotificationEKDataSource : NSObject <CALNEventInvitationNotificationDataSource>

@property (readonly, nonatomic) id<EKEventStoreProvider> eventStoreProvider;
@property (readonly, nonatomic) id<CALNInboxNotificationProvider> inboxNotificationProvider;
@property (readonly, nonatomic) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (readonly, nonatomic) id<CALNRemoteMutator> remoteMutator;
@property (readonly, nonatomic) id<CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_spanForNewStatusWithEvent:(id)a0;

- (void).cxx_destruct;
- (id)fetchEventInvitationNotificationWithSourceClientIdentifier:(id)a0;
- (void)declineEventInvitationWithSourceClientIdentifier:(id)a0;
- (void)clearEventInvitationWithSourceClientIdentifier:(id)a0;
- (void)tentativeAcceptEventInvitationWithSourceClientIdentifier:(id)a0;
- (void)acceptEventInvitationWithSourceClientIdentifier:(id)a0;
- (id)_notificationInfoFromNotification:(id)a0 inEventStore:(id)a1;
- (id)initWithEventStoreProvider:(id)a0 inboxNotificationProvider:(id)a1 notificationReferenceProvider:(id)a2 remoteMutator:(id)a3 dataSourceEventRepresentationProvider:(id)a4;
- (void)_setParticipantStatus:(long long)a0 withSourceClientIdentifier:(id)a1;
- (id)fetchEventInvitationNotificationSourceClientIdentifiers:(id)a0;
- (id)fetchEventInvitationNotifications;
- (void)reportEventInvitationAsJunkWithSourceClientIdentifier:(id)a0;

@end
