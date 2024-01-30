@class CoreDAVHrefItem, CalDAVCalendarServerAccessItem, CoreDAVItemWithNoChildren, CoreDAVItemWithHrefChildItem, CalDAVCalendarServerOrganizerItem, CalDAVSupportedCalendarComponentSet, CoreDAVLeafItem;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *uid;
@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *calendarPublic;
@property (retain, nonatomic) CalDAVCalendarServerAccessItem *access;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *hostURL;
@property (retain, nonatomic) CalDAVCalendarServerOrganizerItem *organizer;
@property (retain, nonatomic) CoreDAVLeafItem *summary;
@property (retain, nonatomic) CalDAVSupportedCalendarComponentSet *supportedCalendarComponentSet;

- (id)init;
- (void).cxx_destruct;
- (id)copyParseRules;
- (id)initForReplyWithUID:(id)a0 href:(id)a1 hostURL:(id)a2 summary:(id)a3;
- (BOOL)isComponentSupportedForString:(id)a0;

@end
