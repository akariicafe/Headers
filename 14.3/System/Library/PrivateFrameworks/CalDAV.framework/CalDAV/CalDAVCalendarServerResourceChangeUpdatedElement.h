@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement

@property (nonatomic) BOOL content;
@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) NSMutableSet *calendarChanges;

- (id)init;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)addContentItem:(id)a0;
- (void)addCalendarChange:(id)a0;

@end
