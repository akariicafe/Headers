@class NSDate, NSString, MapsSuggestionsTracker, GEOAutomobileOptions, NSArray, NSMutableDictionary, MapsSuggestionsCanKicker, NSObject, NSMutableSet, MapsSuggestionsObservers, CLLocation;
@protocol MapsSuggestionsStrategy, MapsSuggestionsLocationUpdater, OS_dispatch_queue;

@interface MapsSuggestionsManager : NSObject <MapsSuggestionsObject, MapsSuggestionsSourceDelegate, MapsSuggestionsLocationUpdaterDelegate> {
    NSObject<OS_dispatch_queue> *_gatheringQueue;
    NSObject<OS_dispatch_queue> *_storageQueue;
    NSMutableDictionary *_additionalFiltersPerSink;
    MapsSuggestionsTracker *_tracker;
    NSDate *_etaValidUntil;
    MapsSuggestionsObservers *_sinks;
    NSMutableSet *_sources;
    NSMutableDictionary *_storage;
    NSArray *_latestResults;
    int _defaultTansportType;
    MapsSuggestionsCanKicker *_expiredEntryInvalidator;
    MapsSuggestionsCanKicker *_wipeStaleETAWiper;
    MapsSuggestionsCanKicker *_deferredSourcesUpdater;
    CLLocation *_oldLocation;
}

@property (retain, nonatomic) id<MapsSuggestionsStrategy> strategy;
@property (nonatomic) int mapType;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (weak, nonatomic) id<MapsSuggestionsLocationUpdater> locationUpdater;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (void)awaitGatheringQueue;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (void)removeAdditionalFilter:(id)a0 forSink:(id)a1;
- (void)hintRefreshOfType:(long long)a0;
- (void)detachSink:(id)a0;
- (void)attachSink:(id)a0;
- (void).cxx_destruct;
- (id)storageForSource:(id)a0;
- (void)awaitStorageQueue;
- (void)didLoseLocationPermission;
- (id)storage;
- (void)dealloc;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (void)trackerRefreshedETAsUntil:(id)a0;
- (unsigned long long)addOrUpdateSuggestionEntries:(id)a0 source:(id)a1;
- (char)topSuggestionsForSink:(id)a0 count:(unsigned long long)a1 transportType:(int)a2 callback:(id /* block */)a3 onQueue:(id)a4;
- (id)sinks;
- (char)oneShotTopSuggestionsForSink:(id)a0 transportType:(int)a1 count:(unsigned long long)a2 queue:(id)a3 handler:(id /* block */)a4;
- (void)detachSource:(id)a0;
- (void)attachSource:(id)a0;
- (id)sources;
- (void)addAdditionalFilter:(id)a0 forSink:(id)a1;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (char)topSuggestionsForSink:(id)a0 count:(unsigned long long)a1 queue:(id)a2 handler:(id /* block */)a3;
- (id)initWithStrategy:(id)a0 locationUpdater:(id)a1 network:(id)a2 flightUpdater:(id)a3 ETARequirements:(id)a4 virtualGarage:(id)a5;
- (char)oneShotTopSuggestionsForSink:(id)a0 count:(unsigned long long)a1 transportType:(int)a2 callback:(id /* block */)a3 onQueue:(id)a4;
- (char)loadStorageFromFile:(id)a0 callback:(id /* block */)a1 callbackQueue:(id)a2;
- (BOOL)loadStorageFromFile:(id)a0;
- (void)didUpdateLocation:(id)a0;
- (char)oneShotTopSuggestionsForSink:(id)a0 count:(unsigned long long)a1 queue:(id)a2 handler:(id /* block */)a3;
- (char)saveStorageToFile:(id)a0 callback:(id /* block */)a1;
- (char)topSuggestionsForSink:(id)a0 transportType:(int)a1 count:(unsigned long long)a2 queue:(id)a3 handler:(id /* block */)a4;

@end
