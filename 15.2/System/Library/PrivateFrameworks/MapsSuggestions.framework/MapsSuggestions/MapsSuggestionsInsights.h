@class MapsSuggestionsRoutineRelevanceScoreProvider, NSString, NSXPCConnection, MapsSuggestionsPortraitRelevanceScoreProvider, MapsSuggestionsRelevanceScorer, NSObject, MapsSuggestionsFwdGeocodingRelevanceScoreProvider;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsInsights : NSObject <MapsSuggestionsObject> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
    MapsSuggestionsFwdGeocodingRelevanceScoreProvider *_fwdGeoCodingRoutineScoreProvider;
    MapsSuggestionsRoutineRelevanceScoreProvider *_routineScoreProvider;
    MapsSuggestionsPortraitRelevanceScoreProvider *_portraitScoreProvider;
    MapsSuggestionsRelevanceScorer *_relevanceScorer;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initFromResourceDepot:(id)a0;
- (id)signalPackForDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (char)signalPackForDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;
- (char)signalPackForHereWithHandler:(id /* block */)a0;
- (char)signalPackForDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;
- (id)signalPackForHere;
- (BOOL)isTransitUserHere;
- (double)isTouristHere;
- (id)signalPackForDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void).cxx_destruct;
- (BOOL)isTransitUser;
- (void)preload;
- (void)dealloc;
- (id).cxx_construct;
- (id)confidenceScoresForMapItems:(id)a0;
- (id)confidenceScoresForContacts:(id)a0 addresses:(id)a1;

@end
