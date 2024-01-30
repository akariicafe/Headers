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

- (id)initWithEventStore:(id)a0 calendars:(id)a1;
- (BOOL)cachedOccurrencesAreLoaded;
- (long long)countOfOccurrencesAtDayIndex:(long long)a0;
- (id)cachedOccurrenceAtIndexPath:(id)a0;
- (id)_cachedDays;
- (void)stopSearching;
- (id)dateAtDayIndex:(long long)a0;
- (BOOL)supportsFakeTodaySection;
- (void).cxx_destruct;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0;
- (BOOL)cachedOccurrencesAreBeingGenerated;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)a0;
- (void)invalidate;
- (BOOL)supportsInvitations;
- (long long)cachedDayCount;
- (void)invalidateCachedOccurrences;
- (void)searchWithTerm:(id)a0;

@end
