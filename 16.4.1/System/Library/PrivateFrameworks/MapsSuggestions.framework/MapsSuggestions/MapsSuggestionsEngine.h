@class MapsSuggestionsManager, NSString, GEOAutomobileOptions, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsResourceDepot;

@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject, MapsSuggestionsResourceDepot> {
    id<MapsSuggestionsResourceDepot> _resourceDepot;
    MapsSuggestionsManager *_entryManager;
    NSObject<OS_dispatch_queue> *_optionsSerialQueue;
}

@property (nonatomic) int mapType;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)oneMapsSync;
- (id)oneFavorites;
- (id)oneSourceDelegate;
- (id)oneRoutine;
- (id)oneContacts;
- (id)strategy;
- (id)oneInsights;
- (id)topSuggestionsFromStorageFile:(id)a0 sink:(id)a1 count:(unsigned long long)a2 transportType:(int)a3;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (void)detachSink:(id)a0;
- (id)oneEventKit;
- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (void)hintRefreshOfType:(long long)a0;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (BOOL)topSuggestionsForSink:(id)a0 count:(unsigned long long)a1 transportType:(int)a2 callback:(id /* block */)a3 onQueue:(id)a4;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (BOOL)saveStorageToFile:(id)a0 callback:(id /* block */)a1;
- (id)oneFlightUpdater;
- (void)removeAdditionalFilter:(id)a0 forSink:(id)a1;
- (id)initWithEntryManager:(id)a0 resourceDepot:(id)a1;
- (BOOL)loadStorageFromFile:(id)a0;
- (id)oneUser;
- (BOOL)topSuggestionsFromStorageFile:(id)a0 sink:(id)a1 count:(unsigned long long)a2 transportType:(int)a3 callback:(id /* block */)a4 onQueue:(id)a5;
- (id)oneNetworkRequester;
- (BOOL)oneShotTopSuggestionsForSink:(id)a0 count:(unsigned long long)a1 transportType:(int)a2 callback:(id /* block */)a3 onQueue:(id)a4;
- (void)addAdditionalFilter:(id)a0 forSink:(id)a1;
- (id)oneVirtualGarage;
- (id)topSuggestionsForSink:(id)a0 count:(unsigned long long)a1 transportType:(int)a2;
- (id)onePortrait;
- (id)manager;
- (void)attachSink:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadStorageFromFile:(id)a0 callback:(id /* block */)a1 callbackQueue:(id)a2;

@end
