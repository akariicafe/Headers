@interface EKCalendarInviteReplyNotification : EKCalendarNotification

@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long allowedEntityTypes;

- (BOOL)acknowledgeWithEventStore:(id)a0 error:(id *)a1;
- (id)initWithType:(long long)a0;
- (id)inviteReplyNotificationFromEventStore:(id)a0;

@end
