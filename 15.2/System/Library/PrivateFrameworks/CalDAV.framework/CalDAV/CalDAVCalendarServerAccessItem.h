@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel;

- (id)initWithAccess:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;

@end
