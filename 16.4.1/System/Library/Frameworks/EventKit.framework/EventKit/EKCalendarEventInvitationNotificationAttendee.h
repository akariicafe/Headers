@class NSString, NSURL, NSDate;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL statusChanged;
@property (readonly, nonatomic) BOOL commentChanged;
@property (readonly, nonatomic) BOOL proposedStartDateChanged;
@property (readonly, nonatomic) long long participantType;
@property (readonly, nonatomic) long long participantStatus;
@property (readonly, nonatomic) NSString *comment;
@property (readonly, nonatomic) NSDate *proposedStartDate;
@property (readonly, nonatomic) BOOL proposedStartDateDeclined;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithParticipant:(id)a0 forEvent:(id)a1;

@end
