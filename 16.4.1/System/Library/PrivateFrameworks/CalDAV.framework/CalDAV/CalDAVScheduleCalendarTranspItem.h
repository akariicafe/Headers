@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *transparent;
@property (readonly, nonatomic) BOOL isScheduleTransparent;

- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;

@end
