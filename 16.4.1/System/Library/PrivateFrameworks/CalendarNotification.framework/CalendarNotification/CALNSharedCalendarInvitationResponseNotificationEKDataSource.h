@class NSString;
@protocol CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, EKNotificationPreferences, EKEventStoreProvider;

@interface CALNSharedCalendarInvitationResponseNotificationEKDataSource : NSObject <CALNSharedCalendarInvitationResponseNotificationDataSource>

@property (readonly, nonatomic) id<EKEventStoreProvider> eventStoreProvider;
@property (readonly, nonatomic) id<CALNInboxNotificationProvider> inboxNotificationProvider;
@property (readonly, nonatomic) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (readonly, nonatomic) id<EKNotificationPreferences> preferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchSharedCalendarInvitationResponseNotifications;
- (id)_notificationInfoFromNotificationReference:(id)a0;
- (id)_notificationInfoFromNotification:(id)a0;
- (void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)a0;
- (id)fetchSharedCalendarInvitationResponseNotificationWithSourceClientIdentifier:(id)a0;
- (id)fetchSharedCalendarInvitationResponseNotificationSourceClientIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventStoreProvider:(id)a0 inboxNotificationProvider:(id)a1 notificationReferenceProvider:(id)a2 preferences:(id)a3;

@end
