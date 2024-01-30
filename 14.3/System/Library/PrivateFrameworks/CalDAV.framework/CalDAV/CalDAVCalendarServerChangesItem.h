@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *changedProperties;

- (id)init;
- (void).cxx_destruct;
- (void)addChangedProperty:(id)a0;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;
- (id)copyParseRules;

@end
