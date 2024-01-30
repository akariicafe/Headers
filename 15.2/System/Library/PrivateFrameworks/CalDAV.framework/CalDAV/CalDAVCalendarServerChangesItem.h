@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *changedProperties;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;
- (void)addChangedProperty:(id)a0;

@end
