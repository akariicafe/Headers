@class NSString, NSSet, EKEventStore, NSMutableArray;

@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol> {
    EKEventStore *_eventStore;
    NSSet *_calendars;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fetchLock;
    NSMutableArray *_cachedDays;
    int _cachedDaysSeed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dateAtDayIndex:(long long)a0;
- (id)_cachedDays;
- (id)initWithEventStore:(id)a0 calendars:(id)a1;
- (void)searchWithTerm:(id)a0;
- (id)indexPathsForOccurrence:(id)a0;
- (void)stopSearching;
- (BOOL)supportsFakeTodaySection;
- (void)setCachedDays:(id)a0;
- (id)_mutableDayDictionaryAtIndex:(unsigned long long)a0;
- (void)_fetchDaysStartingFromSection:(long long)a0 sectionsToLoadInBothDirections:(long long)a1 background:(BOOL)a2 includeGivenSection:(BOOL)a3;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)a0;
- (id)faultOccurrencesForDay:(id)a0 inOccurrencesArray:(id)a1 index:(long long)a2 limit:(long long *)a3 cacheSeed:(int)a4;
- (long long)countOfOccurrencesAtDayIndex:(long long)a0;
- (BOOL)supportsInvitations;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0;
- (void)invalidate;
- (void)invalidateCachedOccurrences;
- (id)cachedOccurrenceAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (long long)cachedDayCount;
- (id)_createCachedDays;
- (void)fetchDaysStartingFromSection:(long long)a0 sectionsToLoadInBothDirections:(long long)a1;
- (BOOL)cachedOccurrencesAreLoaded;
- (id)_cachedOccurrenceAtIndexPath:(id)a0;

@end
