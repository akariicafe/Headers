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

- (id)initWithEventStore:(id)a0 calendars:(id)a1;
- (void)_updateCachedDays;
- (long long)countOfOccurrencesAtDayIndex:(long long)a0;
- (id)_cachedDays;
- (void)stopSearching;
- (BOOL)supportsFakeTodaySection;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)supportsInvitations;
- (void)dealloc;
- (void)_setCachedDaysAndNotify:(id)a0;
- (void)invalidateCachedOccurrences;
- (void)searchWithTerm:(id)a0;

@end
