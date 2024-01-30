@class GEOTileKeyList, NSString, GEORoutePreloader, GEOComposedRoute, NSMutableDictionary, NSMutableArray, NSObject, NSMapTable;
@protocol OS_dispatch_queue, GEORoutePreloadCamera, OS_dispatch_source;

@interface GEONavRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy> {
    NSObject<OS_dispatch_queue> *_workQueue;
    double _currentRoutePosition;
    int _downloadState;
    GEOTileKeyList *_tilesLoadingOrLoaded;
    GEOTileKeyList *_tilesReceived;
    NSMutableArray *_steps;
    unsigned int _stepGeneration;
    long long _currentLoadingSteps;
    NSMapTable *_stepErrors;
    NSMapTable *_stepLifetimeErrors;
    BOOL _anyErrors;
    BOOL _finished;
    double _beginTime;
    double _mostRecentErrorTime;
    BOOL _hadEnoughTilesToDisableNetworking;
    NSObject<OS_dispatch_source> *_geodCrashTimer;
    double _maneuverSizeInMeters;
    BOOL _enabled;
    double _stepSizeInMeters;
    NSMutableDictionary *_tileSetStyles;
}

@property (retain, nonatomic) id<GEORoutePreloadCamera> camera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) GEORoutePreloader *preloader;
@property (retain, nonatomic) GEOComposedRoute *route;

- (void)_stop;
- (void)_start;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)_performTileRequestsWithCurrentRoutePositionStepIndex:(long long)a0 firstErrorStepIndex:(long long)a1 firstLoadStepIndex:(long long)a2 loadStepsAhead:(long long)a3 loadStepsAheadIfNoWiFi:(long long)a4;
- (id)init;
- (void)updateWithRoute:(id)a0 routeMatch:(id)a1;
- (void)performTearDown;
- (void)updateWithRouteMatch:(id)a0;
- (void)observedNetworkQualityDidChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)_retryFailuresWithErrorsReset:(BOOL)a0;
- (void)_performNextRequests;
- (void)addTileSetStyle:(int)a0 betweenZoom:(unsigned int)a1 andZoom:(unsigned int)a2;
- (void)_geodCrashed;
- (void)_resetErrCounts;
- (void)_cancelAllSteps;
- (void)_accumulateSteps;
- (void)start;
- (void)_cancelStep:(id)a0;
- (id)_descriptionForStep:(id)a0;
- (void)_incrementErrorForStep:(id)a0;
- (BOOL)_loadStep:(id)a0 requireWiFi:(BOOL)a1;
- (void)_cancelRequestsInPast;

@end
