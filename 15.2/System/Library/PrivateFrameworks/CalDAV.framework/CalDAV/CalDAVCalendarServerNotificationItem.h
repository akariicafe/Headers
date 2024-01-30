@class CoreDAVLeafItem, CoreDAVItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *dtstamp;
@property (retain, nonatomic) CoreDAVItem *content;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;

@end
