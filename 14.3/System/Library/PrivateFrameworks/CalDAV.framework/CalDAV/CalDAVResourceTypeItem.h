@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *calendar;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *scheduleInbox;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *scheduleOutbox;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *notification;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *subscribed;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *sharedOwner;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isFamilyCalendar;

- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)copyParseRules;

@end
