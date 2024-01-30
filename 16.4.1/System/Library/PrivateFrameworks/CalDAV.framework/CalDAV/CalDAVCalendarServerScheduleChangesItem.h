@class CoreDAVLeafItem, CalDAVCalendarServerActionItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *dtstamp;
@property (retain, nonatomic) CalDAVCalendarServerActionItem *action;

- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;

@end
