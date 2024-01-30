@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *changedProperties;

- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;
- (void)addChangedProperty:(id)a0;

@end
