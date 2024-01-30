@class GEOLocationShifter, NSString, NSMutableDictionary, MapsSuggestionsLimitedDictionary, NSDate, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsRoutineConnector, MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsRoutine : NSObject <MapsSuggestionsObject> {
    id<MapsSuggestionsRoutineConnector> _connector;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    MapsSuggestionsObservers *_parkedCarObservers;
    NSMutableDictionary *_loiLocationsForHome;
    NSMutableDictionary *_loiLocationsForWork;
    NSMutableDictionary *_loiLocationsForSchool;
    NSMutableDictionary *_loiVisits;
    NSMutableDictionary *_identifierToDatesMapping;
    NSDate *_cacheTimeStamp;
    MapsSuggestionsLimitedDictionary *_mapItemCache;
    MapsSuggestionsLimitedDictionary *_mapItemCacheOrigin;
    GEOLocationShifter *_locationShifter;
    BOOL _areFrequentLocationsAvailable;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)fetchLastVisitAtMapItem:(id)a0 withinDistance:(double)a1 handler:(id /* block */)a2;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (char)fetchSuggestedShortcutsForType:(long long)a0 minVisits:(unsigned long long)a1 maxAge:(double)a2 handler:(id /* block */)a3;
- (id)initFromResourceDepot:(id)a0;
- (id).cxx_construct;
- (char)fetchLocationsSinceDate:(id)a0 handler:(id /* block */)a1;
- (void)forgetLocationOfInterest:(id)a0 handler:(id /* block */)a1;
- (char)predictedExitTimeFromLocation:(id)a0 date:(id)a1 handler:(id /* block */)a2;
- (void)removeParkedCarObserver:(id)a0;
- (char)fetchEntriesForLocation:(id)a0 period:(id)a1 handler:(id /* block */)a2;
- (char)fetchMostRecentVisitWithinDistance:(double)a0 ofMapItem:(id)a1 handler:(id /* block */)a2;
- (id)initWithRoutineConnector:(id)a0 networkRequester:(id)a1;
- (unsigned long long)countHomeLOIs;
- (void)updateFixedLOIs;
- (unsigned long long)countSchoolLOIs;
- (char)fetchLastVisitAtLocation:(id)a0 handler:(id /* block */)a1;
- (char)readMeCardWithMinVisits:(unsigned long long)a0 maxAge:(double)a1 handler:(id /* block */)a2;
- (void)addParkedCarObserver:(id)a0;
- (char)touristBitForLocation:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)countWorkLOIs;
- (void)removeParkedCarsAllowingFeature:(BOOL)a0 handler:(id /* block */)a1;

@end
