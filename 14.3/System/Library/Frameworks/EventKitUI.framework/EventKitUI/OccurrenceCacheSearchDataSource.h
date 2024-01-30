@class EKSpotlightSearch, EKOccurrenceCacheSearch, NSString, NSMutableDictionary, NSArray;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource {
    EKSpotlightSearch *_narrowSearch;
    EKSpotlightSearch *_distantFutureSearch;
    EKSpotlightSearch *_distantPastSearch;
    EKOccurrenceCacheSearch *_legacySearch;
    NSString *_searchTerm;
    NSMutableDictionary *_processingCachedDays;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _resultsLock;
    NSArray *_sortedDays;
    int _searchSeed;
}

- (id)_cachedDays;
- (void)stopSearching;
- (BOOL)supportsFakeTodaySection;
- (id)initWithEventStore:(id)a0 calendars:(id)a1;
- (void).cxx_destruct;
- (long long)countOfOccurrencesAtDayIndex:(long long)a0;
- (void)dealloc;
- (void)_setCachedDaysAndNotify:(id)a0;
- (void)_updateCachedDays;
- (BOOL)supportsInvitations;
- (void)searchWithTerm:(id)a0;
- (void)invalidateCachedOccurrences;
- (void)invalidate;

@end
