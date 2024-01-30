@interface EKCalendarAccountGrouper : NSObject

+ (id)_groupForCustomGroupType:(unsigned long long)a0 inMap:(id)a1;
+ (id)_groupForSource:(id)a0 inMap:(id)a1;
+ (void)_insertStore:(id)a0 intoByGroupArray:(id)a1;
+ (void)_populateGroups:(id)a0 forNonDelegateSources:(id)a1;
+ (id)calendarsLimitedToSource:(id)a0 writability:(long long)a1 onlyUnmanagedAccounts:(BOOL)a2 forEvent:(id)a3 entityType:(unsigned long long)a4 inEventStore:(id)a5;
+ (id)calendarsLimitedToSource:(id)a0 writability:(long long)a1 onlyUnmanagedAccounts:(BOOL)a2 forEvents:(id)a3 entityType:(unsigned long long)a4 inEventStore:(id)a5;
+ (id)generateGroupsForCalendars:(id)a0 eventStore:(id)a1 entityType:(unsigned long long)a2 forMode:(int)a3 usingBackgroundColor:(id)a4 includingAccountsWithoutCalendars:(BOOL)a5 filterByFocus:(BOOL)a6 usingUnselectedCalendars:(id)a7 foundRefreshableCalendar:(BOOL *)a8 anyGroupsHiddenByFocus:(BOOL *)a9 numberOfCalendarsHiddenByFocus:(int *)a10;

@end
