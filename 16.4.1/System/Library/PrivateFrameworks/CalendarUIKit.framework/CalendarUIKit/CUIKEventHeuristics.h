@interface CUIKEventHeuristics : NSObject

+ (id)tomorrowsEventsInCalendars:(id)a0 filterOptions:(unsigned long long)a1 sortMethod:(unsigned long long)a2 eventStore:(id)a3;
+ (BOOL)_shouldFilterEvent:(id)a0 filterOptions:(unsigned long long)a1;
+ (id)_sortedAndFilteredEventsForPredicate:(id)a0 filterOptions:(unsigned long long)a1 sortMethod:(unsigned long long)a2 eventStore:(id)a3;
+ (id)_sortedEvents:(id)a0 withMethod:(unsigned long long)a1;
+ (id)todaysEventsInCalendars:(id)a0 filterOptions:(unsigned long long)a1 sortMethod:(unsigned long long)a2 eventStore:(id)a3;
+ (id)upcomingEventsInCalendars:(id)a0 onlyReturnFirstEvents:(BOOL)a1 filterOptions:(unsigned long long)a2 sortMethod:(unsigned long long)a3 eventStore:(id)a4;

@end
