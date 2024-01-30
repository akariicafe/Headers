@class NSArray, EKEventStore, NSMutableSet, NSSet, NSObject;
@protocol CalendarEventLoaderDelegate, OS_dispatch_queue, OS_dispatch_group;

@interface CalendarEventLoader : NSObject {
    EKEventStore *_store;
    NSObject<OS_dispatch_queue> *_occurrencesLock;
    NSArray *_loadedOccurrences;
    NSArray *_loadedProposedTimeOccurrences;
    NSMutableSet *_occurrencesAwaitingRefresh;
    NSMutableSet *_occurrencesAwaitingDeletion;
    NSSet *_selectedCalendars;
    BOOL _selectedCalendarsWereSet;
    unsigned int _daysOfPadding;
    unsigned int _maxDaysToCache;
    unsigned long long _componentForExpandingRequests;
    unsigned long long _componentForExpandingPadding;
    double _preferredReloadStart;
    double _preferredReloadEnd;
    NSObject<OS_dispatch_group> *_loadGroup;
    NSObject<OS_dispatch_queue> *_loadQueue;
    int _cancelSeed;
    double _loadedStart;
    double _loadedEnd;
    BOOL _loadedOccurrencesAreStale;
    double _currentlyLoadingStart;
    double _currentlyLoadingEnd;
    double _lastRequestedStart;
    double _lastRequestedEnd;
}

@property (weak, nonatomic) id<CalendarEventLoaderDelegate> delegate;
@property (nonatomic) BOOL allowEventLocationPrediction;

- (void)loadIfNeeded;
- (void)_getLoadStart:(double *)a0 end:(double *)a1 fromLoadedStart:(double)a2 loadedEnd:(double)a3 currentlyLoadingStart:(double)a4 currentlyLoadingEnd:(double)a5;
- (void)_eventStoreChanged:(id)a0;
- (void)setPadding:(unsigned int)a0;
- (void).cxx_destruct;
- (void)setComponentForExpandingPadding:(unsigned long long)a0;
- (void)setComponentForExpandingRequests:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)setSelectedCalendars:(id)a0;
- (void)addOccurrenceAwaitingDeletion:(id)a0;
- (id)_uniqueEventsFromArray:(id)a0;
- (void)_reload;
- (void)_loadIfNeededBetweenStart:(double)a0 end:(double)a1 loadPaddingNow:(BOOL)a2;
- (void)_enqueueLoadForRangeStart:(double)a0 end:(double)a1;
- (void)_getStart:(double)a0 end:(double)a1 paddedByDays:(int)a2 inTimeZone:(id)a3 resultStart:(double *)a4 resultEnd:(double *)a5;
- (void)waitForBackgroundLoad;
- (void)timeZoneChanged;
- (void)_getStart:(double)a0 end:(double)a1 expandedToComponents:(unsigned long long)a2 withResultStart:(double *)a3 resultEnd:(double *)a4;
- (void)setCacheLimit:(unsigned int)a0;
- (id)initWithEventStore:(id)a0;
- (void)setPreferredReloadStartDate:(id)a0 endDate:(id)a1;
- (void)cancelAllLoads;
- (BOOL)loadIsComplete;
- (void)_pruneLoadedOccurrences;
- (BOOL)firstLoadBegan;
- (void)addOccurrenceAwaitingRefresh:(id)a0;
- (id)occurrencesForStartDate:(id)a0 endDate:(id)a1 preSorted:(BOOL)a2 waitForLoad:(BOOL)a3;

@end
