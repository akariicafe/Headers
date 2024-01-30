@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel;

- (id)copyParseRules;
- (id)initWithAccess:(int)a0;
- (id)init;
- (void).cxx_destruct;

@end
