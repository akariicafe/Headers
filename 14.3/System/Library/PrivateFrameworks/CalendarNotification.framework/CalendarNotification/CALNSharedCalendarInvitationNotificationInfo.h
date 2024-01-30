@class NSString, EKCalendarNotification;

@interface CALNSharedCalendarInvitationNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;
@property (readonly, nonatomic) EKCalendarNotification *calendarNotification;
@property (readonly, nonatomic) BOOL isDelegate;
@property (readonly, copy, nonatomic) NSString *sourceTitle;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceClientIdentifier:(id)a0 calendarNotification:(id)a1 isDelegate:(BOOL)a2 sourceTitle:(id)a3 sourceIdentifier:(id)a4;

@end
