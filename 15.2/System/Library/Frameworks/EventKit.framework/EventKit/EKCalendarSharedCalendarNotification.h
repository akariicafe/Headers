@interface EKCalendarSharedCalendarNotification : EKCalendarNotification

@property (nonatomic) unsigned long long sharingInvitationResponse;
@property (nonatomic) unsigned long long allowedEntityTypes;

- (id)initWithType:(long long)a0;
- (id)calendarFromEventStore:(id)a0;
- (BOOL)isSharedCalendarInvitation;

@end
