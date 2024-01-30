@class CoreDAVHrefItem, CalDAVCalendarServerAccessItem, CoreDAVItemWithNoChildren, NSString, NSURL, CoreDAVLeafItem;

@interface CalDAVCalendarServerUserItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVLeafItem *commonName;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus;
@property (retain, nonatomic) CalDAVCalendarServerAccessItem *access;
@property (retain, nonatomic) CoreDAVLeafItem *summary;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSURL *acceptedURL;

- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithHREF:(id)a0 commonName:(id)a1 inviteStatus:(int)a2 access:(int)a3;
- (id)copyParseRules;
- (void)setFirstNameItem:(id)a0;
- (void)setLastNameItem:(id)a0;
- (void)setAcceptedURLItem:(id)a0;

@end
