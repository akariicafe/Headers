@class NSMutableDictionary, MapsSuggestionsETARequirements, MapsSuggestionsMutableWeakEntries, MapsSuggestionsPredictor, NSObject, CLLocation, MapsSuggestionsVirtualGarage, MapsSuggestionsFlightUpdater, MapsSuggestionsCanKicker, NSString, GEOAutomobileOptions, MapsSuggestionsDonater, MapsSuggestionsManager, MapsSuggestionsETARequester;
@protocol OS_dispatch_queue, MapsSuggestionsNetworkRequester, MapsSuggestionsTimer;

@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject> {
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsETARequirements *_requirements;
    id<MapsSuggestionsTimer> _refreshTimer;
    double _refreshInterval;
    double _refreshLeeway;
    double _refreshDeferTime;
    int _transportType;
    MapsSuggestionsManager *_manager;
    NSMutableDictionary *_etaTitleFormatters;
    NSMutableDictionary *_distanceTitleFormatters;
    NSMutableDictionary *_etaChargeTitleFormatters;
    BOOL _shouldBeRunning;
    MapsSuggestionsETARequester *_etaRequester;
    MapsSuggestionsDonater *_donater;
    MapsSuggestionsCanKicker *_currentLocationWiper;
    NSMutableDictionary *_previousETAs;
    id _transportTypeChangedListener;
    MapsSuggestionsVirtualGarage *_virtualGarage;
    MapsSuggestionsFlightUpdater *_flightUpdater;
}

@property (retain) CLLocation *currentLocation;
@property (retain, nonatomic) MapsSuggestionsMutableWeakEntries *trackedEntries;
@property (retain, nonatomic) id<MapsSuggestionsNetworkRequester> networkRequester;
@property (retain, nonatomic) MapsSuggestionsPredictor *predictor;
@property (nonatomic) int mapType;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetAllTitleFormatting;
- (void)scheduleRefresh;
- (void)unschedule;
- (void)setTitleFormatter:(id)a0 forType:(long long)a1;
- (void)clearLocationAndETAs;
- (void).cxx_destruct;
- (void)rescheduleRefreshOnlyIfAlreadyRunning;
- (id)initWithManager:(id)a0 requirements:(id)a1 network:(id)a2 flightUpdater:(id)a3 virtualGarage:(id)a4;
- (void)trackSuggestionEntries:(id)a0 transportType:(int)a1;
- (void)dealloc;
- (void)setLocation:(id)a0;

@end
