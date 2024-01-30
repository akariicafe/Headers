@class NSURL, NSString, CalDAVCalendarServerInviteNotificationItem;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>

@property (retain, nonatomic) CalDAVCalendarServerInviteNotificationItem *invitation;
@property (nonatomic) BOOL acceptInvitation;
@property (retain, nonatomic) NSURL *calendarHomeURL;
@property (nonatomic) id<CoreDAVTaskGroupDelegate> delegate;
@property (retain, nonatomic) NSURL *sharedAs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)startTaskGroup;
- (void).cxx_destruct;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1;
- (id)generateReply;
- (id)initWithInvitation:(id)a0 acceptInvitation:(BOOL)a1 atCalendarHomeURL:(id)a2 accountInfoProvider:(id)a3 taskManager:(id)a4;

@end
