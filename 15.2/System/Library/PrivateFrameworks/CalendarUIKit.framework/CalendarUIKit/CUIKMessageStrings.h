@class NSArray, EKCalendarEventInvitationNotificationAttendee;

@interface CUIKMessageStrings : NSObject

@property (readonly, nonatomic) NSArray *titleStrings;
@property (readonly, nonatomic) NSArray *bodyStrings;
@property (readonly, nonatomic) long long comments;
@property (readonly, nonatomic) BOOL timeProposals;
@property (readonly, nonatomic) EKCalendarEventInvitationNotificationAttendee *importantAttendee;

- (void).cxx_destruct;
- (id)initWithTitles:(id)a0 bodyStrings:(id)a1 comments:(long long)a2 timeProposals:(BOOL)a3 importantAttendee:(id)a4;

@end
