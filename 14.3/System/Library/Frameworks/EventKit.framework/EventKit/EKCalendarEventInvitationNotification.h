@class NSTimeZone, NSString, NSArray, NSDate, EKRecurrenceRule, EKCalendarEventInvitationNotificationAttendee;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification <NSCopying>

@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *startDateForNextOccurrence;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *participationStatusModifiedDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long participationStatus;
@property (nonatomic) long long status;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (retain, nonatomic) EKRecurrenceRule *recurrenceRule;
@property (nonatomic) BOOL timeChanged;
@property (nonatomic) BOOL dateChanged;
@property (nonatomic) BOOL locationChanged;
@property (nonatomic) BOOL attendeeReplyChanged;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) EKCalendarEventInvitationNotificationAttendee *owner;
@property (readonly, nonatomic) NSString *invitedBy;
@property (nonatomic) BOOL couldBeJunk;
@property (retain, nonatomic) EKCalendarEventInvitationNotificationAttendee *expandedProposedTimeAttendee;
@property (nonatomic) BOOL expanded;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEvent:(id)a0;
- (BOOL)needsReply;
- (BOOL)isProposedNewTime;
- (BOOL)proposedStartDateIsInFutureForAttendee:(id)a0;
- (BOOL)isInvitation;
- (id)eventFromEventStore:(id)a0;
- (BOOL)hasRecurrenceRules;

@end
