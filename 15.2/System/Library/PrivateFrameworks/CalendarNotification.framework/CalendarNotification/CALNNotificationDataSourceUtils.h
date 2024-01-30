@interface CALNNotificationDataSourceUtils : NSObject

+ (id)sourceClientIdentifierForNotification:(id)a0;
+ (id)notificationReferenceOfType:(int)a0 withSourceClientIdentifier:(id)a1 inEventStore:(id)a2 withNotificationReferenceProvider:(id)a3;
+ (id)eventWithSourceClientIdentifier:(id)a0 inEventStore:(id)a1;
+ (id)calendarWithSourceClientIdentifier:(id)a0 inEventStore:(id)a1;
+ (id)objectIDWithSourceClientIdentifier:(id)a0;
+ (void)hideCalendarFromNotificationCenter:(id)a0 inEventStore:(id)a1;
+ (void)respondToSharedCalendarInvitationWithSourceClientIdentifier:(id)a0 inEventStore:(id)a1 withDataAccessExpressConnection:(id)a2 accept:(BOOL)a3;
+ (void)reportSharedCalendarInvitationAsJunkWithSourceClientIdentifier:(id)a0 inEventStore:(id)a1;
+ (void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)a0 inEventStore:(id)a1;

@end
