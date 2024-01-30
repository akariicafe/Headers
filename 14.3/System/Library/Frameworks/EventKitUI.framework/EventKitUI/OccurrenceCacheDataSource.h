@class NSString, NSSet, EKEventStore, NSArray;

@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol> {
    EKEventStore *_eventStore;
    NSSet *_calendars;
    NSArray *_cachedDays;
    int _cachedDaysSeed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_cachedDays;
- (void)stopSearching;
- (BOOL)supportsFakeTodaySection;
- (id)initWithEventStore:(id)a0 calendars:(id)a1;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0;
- (void).cxx_destruct;
- (id)cachedOccurrenceAtIndexPath:(id)a0;
- (BOOL)cachedOccurrencesAreLoaded;
- (long long)countOfOccurrencesAtDayIndex:(long long)a0;
- (BOOL)supportsInvitations;
- (void)searchWithTerm:(id)a0;
- (id)dateAtDayIndex:(long long)a0;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)a0;
- (long long)cachedDayCount;
- (void)invalidateCachedOccurrences;
- (void)invalidate;
- (BOOL)cachedOccurrencesAreBeingGenerated;

@end
