@class CoreDAVLeafItem, CoreDAVItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *dtstamp;
@property (retain, nonatomic) CoreDAVItem *content;

- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;

@end
