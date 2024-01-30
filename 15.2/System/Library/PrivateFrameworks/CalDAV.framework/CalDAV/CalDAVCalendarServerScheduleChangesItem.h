@class CoreDAVLeafItem, CalDAVCalendarServerActionItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *dtstamp;
@property (retain, nonatomic) CalDAVCalendarServerActionItem *action;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;

@end
