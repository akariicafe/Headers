@class CALNEventCanceledNotificationSource, CALNSharedCalendarInvitationNotificationSource, NSString, NSArray, CALNEventInvitationNotificationSource, CALNCalendarResourceChangedNotificationSource, CALNSharedCalendarInvitationResponseNotificationSource, CALNEventInvitationResponseNotificationSource, CALNTriggeredEventNotificationSource;
@protocol EKEventStoreProvider, CALNNotificationManager;

@interface CALNUITriggersNotificationSource : NSObject <CALNNotificationSource>

@property (readonly, nonatomic) id<CALNNotificationManager> notificationManager;
@property (readonly, nonatomic) id<EKEventStoreProvider> eventStoreProvider;
@property (readonly, nonatomic) CALNTriggeredEventNotificationSource *triggeredEventNotificationSource;
@property (readonly, nonatomic) CALNEventInvitationNotificationSource *eventInvitationNotificationSource;
@property (readonly, nonatomic) CALNEventInvitationResponseNotificationSource *eventInvitationResponseNotificationSource;
@property (readonly, nonatomic) CALNEventCanceledNotificationSource *eventCanceledNotificationSource;
@property (readonly, nonatomic) CALNSharedCalendarInvitationNotificationSource *sharedCalendarInvitationNotificationSource;
@property (readonly, nonatomic) CALNSharedCalendarInvitationResponseNotificationSource *sharedCalendarInvitationResponseNotificationSource;
@property (readonly, nonatomic) CALNCalendarResourceChangedNotificationSource *calendarResourceChangedNotificationSource;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_launchURL;

- (id)_fakeEventInvitationNotificationContentWithDictionary:(id)a0;
- (id)_fakeSharedCalendarInviteReplyNotificationContentWithDictionary:(id)a0;
- (id)_fakeAttendeeRepliedNotificationInfoWithDictionary:(id)a0;
- (id)_fakeSharedCalendarInvitationNotificationInfoWithDictionary:(id)a0;
- (void)didReceiveResponse:(id)a0;
- (id)contentForNotificationWithSourceClientIdentifier:(id)a0;
- (id)_fakeEventCanceledNotificationInfoWithDictionary:(id)a0;
- (id)_fakeCalendarResourceChangedNotificationInfoWithDictionary:(id)a0 sourceClientIdentifier:(id)a1 notificationType:(long long)a2 resourceChangeType:(unsigned int)a3;
- (id)_fakeTriggeredEventNotificationContentWithSourceClientIdentifier:(id)a0;
- (id)_fakeAttendeeRepliedNotificationContentWithDictionary:(id)a0;
- (id)_fakeSharedCalendarEventUpdatedNotificationContentWithDictionary:(id)a0;
- (id)_fakeInviteModifiedNotificationContentWithDictionary:(id)a0;
- (id)_fakeNextEventNotificationContentWithSourceClientIdentifier:(id)a0;
- (id)_fakeSharedCalendarEventAddedNotificationContentWithDictionary:(id)a0;
- (void)refreshNotifications:(id)a0;
- (id)_fakeInvitationNotificationInfoWithDictionary:(id)a0 type:(long long)a1 sourceClientIdentifier:(id)a2;
- (id)_fakeSharedCalendarEventDeletedNotificationContentWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)_fakeNextEventNotificationInfoNextEvent:(id *)a0;
- (id)_fakeSharedCalendarInviteReplyNotificationInfoWithDictionary:(id)a0;
- (id)_fakeInviteCanceledNotificationContentWithDictionary:(id)a0;
- (id)initWithNotificationManager:(id)a0 eventStoreProvider:(id)a1 triggeredEventNotificationSource:(id)a2 eventInvitationNotificationSource:(id)a3 eventInvitationResponseNotificationSource:(id)a4 eventCanceledNotificationSource:(id)a5 sharedCalendarInvitationNotificationSource:(id)a6 sharedCalendarInvitationResponseNotificationSource:(id)a7 calendarResourceChangedNotificationSource:(id)a8;
- (id)_fakeSharedCalendarInvitationNotificationContentWithDictionary:(id)a0;
- (id)_fakeInvitationNotificationWithDictionary:(id)a0 type:(long long)a1;

@end
