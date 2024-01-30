@class NSLock, NSString, GEOAutomobileOptions, MapsSuggestionsETARequirements, NSMutableDictionary, GEOComposedWaypoint, NSObject, CLLocation;
@protocol OS_dispatch_queue, MapsSuggestionsNetworkRequester, MapsSuggestionsPredictor;

@interface MapsSuggestionsETARequester : NSObject <MapsSuggestionsObject> {
    NSObject<OS_dispatch_queue> *_queue;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    id<MapsSuggestionsPredictor> _transportModePredictor;
    MapsSuggestionsETARequirements *_etaRequirements;
    CLLocation *_currentLocationUsed;
    GEOComposedWaypoint *_currentLocationWaypoint;
    NSMutableDictionary *_waypoints;
    NSLock *_waypointsLock;
    int _forcedTransportMode;
}

@property (retain) GEOAutomobileOptions *automobileOptions;
@property int mapType;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceTransportType:(int)a0;
- (BOOL)ETAsFromLocation:(id)a0 toEntries:(id)a1 completion:(id /* block */)a2;
- (BOOL)transportTypeFromLocation:(id)a0 toEntry:(id)a1 completion:(id /* block */)a2;
- (id)networkRequester;
- (id)initWithNetworkRequester:(id)a0 transportModePredictor:(id)a1 requirements:(id)a2;
- (void).cxx_destruct;

@end
