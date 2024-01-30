@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement

@property (nonatomic) BOOL content;
@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) NSMutableSet *calendarChanges;

- (id)copyParseRules;
- (void)addCalendarChange:(id)a0;
- (void)addContentItem:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
