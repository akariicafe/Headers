@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *transparent;
@property (readonly, nonatomic) BOOL isScheduleTransparent;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;

@end
