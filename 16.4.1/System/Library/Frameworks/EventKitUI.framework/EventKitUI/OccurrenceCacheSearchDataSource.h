@class EKSpotlightSearch, NSString, NSMutableDictionary, NSArray;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource {
    EKSpotlightSearch *_narrowSearch;
    EKSpotlightSearch *_distantFutureSearch;
    EKSpotlightSearch *_distantPastSearch;
    NSString *_searchTerm;
    NSMutableDictionary *_processingCachedDays;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _resultsLock;
    NSArray *_sortedDays;
    BOOL _sortedDaysUpdated;
    int _searchSeed;
}

- (id)initWithEventStore:(id)a0 calendars:(id)a1;
- (void)searchWithTerm:(id)a0;
- (void)stopSearching;
- (BOOL)supportsFakeTodaySection;
- (void)_updateCachedDays;
- (void)dealloc;
- (BOOL)supportsInvitations;
- (void)invalidate;
- (void)invalidateCachedOccurrences;
- (void).cxx_destruct;
- (id)_createCachedDays;
- (void)_setCachedDaysAndNotify:(id)a0;

@end
