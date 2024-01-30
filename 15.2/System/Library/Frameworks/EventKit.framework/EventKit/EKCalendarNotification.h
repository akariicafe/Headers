@class EKSource, NSString, EKEvent, NSURL, EKObjectID;

@interface EKCalendarNotification : NSObject <EKIdentityProtocol>

@property (nonatomic) long long type;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) EKObjectID *objectID;
@property (nonatomic) struct CGColor { } *dotColor;
@property (nonatomic) BOOL hiddenFromNotificationCenter;
@property (nonatomic) BOOL alerted;
@property (readonly, nonatomic) BOOL needsAlert;
@property (nonatomic) BOOL couldBeJunk;
@property (retain, nonatomic) EKSource *source;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)dealloc;
- (BOOL)isSharedCalendarInvitation;
- (BOOL)isInvitation;
- (BOOL)acknowledgeWithEventStore:(id)a0 error:(id *)a1;
- (BOOL)isProposedNewTime;
- (BOOL)proposedStartDateIsInFutureForAttendee:(id)a0;

@end
