@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *recurrences;

- (void).cxx_destruct;
- (id)copyParseRules;
- (void)addRecurrence:(id)a0;

@end
