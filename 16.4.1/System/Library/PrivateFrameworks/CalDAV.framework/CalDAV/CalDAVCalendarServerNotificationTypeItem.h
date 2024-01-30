@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteNotification;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteReply;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *resourceChanged;
@property (readonly, nonatomic) BOOL isInviteReply;
@property (readonly, nonatomic) BOOL isInviteNotification;
@property (readonly, nonatomic) BOOL isResourceChanged;

- (id)copyParseRules;
- (id)description;
- (void).cxx_destruct;
- (BOOL)notificationNameIn:(id)a0;
- (BOOL)notificationNameMatches:(id)a0;

@end
