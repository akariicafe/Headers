@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *recurrences;

- (id)copyParseRules;
- (void).cxx_destruct;
- (void)addRecurrence:(id)a0;

@end
