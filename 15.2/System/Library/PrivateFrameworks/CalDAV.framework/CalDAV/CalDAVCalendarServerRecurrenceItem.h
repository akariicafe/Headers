@class CoreDAVItemWithNoChildren, CoreDAVLeafItem, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *master;
@property (retain, nonatomic) CoreDAVLeafItem *recurrenceID;
@property (retain, nonatomic) CalDAVCalendarServerChangesItem *changes;
@property (readonly, nonatomic) BOOL isMaster;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;

@end
