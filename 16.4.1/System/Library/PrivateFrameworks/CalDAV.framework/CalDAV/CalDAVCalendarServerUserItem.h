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

- (id)copyParseRules;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHREF:(id)a0 commonName:(id)a1 inviteStatus:(int)a2 access:(int)a3;
- (void)setAcceptedURLItem:(id)a0;
- (void)setFirstNameItem:(id)a0;
- (void)setLastNameItem:(id)a0;

@end
