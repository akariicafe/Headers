@class NSString, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsMapsSyncConnector;

@interface MapsSuggestionsMapsSync : NSObject <MapsSuggestionsMapsSyncConnectorDelegate, MapsSuggestionsObject> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    id<MapsSuggestionsMapsSyncConnector> _connector;
    MapsSuggestionsObservers *_historyObservers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeMapsSyncObserver:(id)a0;
- (void).cxx_destruct;
- (char)entriesFromHistoryWithHandler:(id /* block */)a0;
- (char)mapItemsForHistoricPlaces:(BOOL)a0 routes:(BOOL)a1 maxAge:(double)a2 handler:(id /* block */)a3;
- (void)mapsSyncDidChangeForType:(long long)a0;
- (char)canProduceRatingRequestForMapItem:(id)a0 maxAge:(double)a1 handler:(id /* block */)a2;
- (char)didProduceRatingRequestForMapItem:(id)a0 handler:(id /* block */)a1;
- (void)addMapsSyncObserver:(id)a0 forContentType:(long long)a1;
- (id)initWithMapsSyncConnector:(id)a0;
- (id).cxx_construct;
- (char)deleteEntry:(id)a0 handler:(id /* block */)a1;
- (id)initFromResourceDepot:(id)a0;

@end
