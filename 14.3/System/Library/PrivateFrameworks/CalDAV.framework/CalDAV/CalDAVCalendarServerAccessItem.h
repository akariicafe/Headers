@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel;

- (id)init;
- (void).cxx_destruct;
- (id)copyParseRules;
- (id)initWithAccess:(int)a0;

@end
