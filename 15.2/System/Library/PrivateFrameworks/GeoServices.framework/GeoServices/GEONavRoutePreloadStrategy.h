@class GEOTileKeyList, NSString, GEORoutePreloader, GEOComposedRoute, NSMutableDictionary, NSMutableArray, NSObject, GEOSPRMetroAvailabilityFetcher, GEOMapAssetMetadataFetcher;
@protocol OS_dispatch_queue, GEORoutePreloadCamera, OS_dispatch_source;

@interface GEONavRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy> {
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _signpostID;
    double _currentRoutePosition;
    int _downloadState;
    GEOTileKeyList *_tilesLoadingOrLoaded;
    GEOTileKeyList *_tilesReceived;
    NSMutableArray *_steps;
    unsigned int _stepGeneration;
    long long _currentLoadingSteps;
    BOOL _useCellularCoverage;
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
    GEOSPRMetroAvailabilityFetcher *_sprAvailabilityFetcher;
    GEOMapAssetMetadataFetcher *_assetMetadataFetcher;
}

@property (retain, nonatomic) id<GEORoutePreloadCamera> camera;
@property (nonatomic) BOOL shouldLoadAssets;
@property (nonatomic) BOOL forceDisableMetros;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) GEORoutePreloader *preloader;
@property (retain, nonatomic) GEOComposedRoute *route;

- (void)_performTileRequestsWithCurrentRoutePositionStepIndex:(long long)a0 firstErrorStepIndex:(long long)a1 firstLoadStepIndex:(long long)a2 loadStepsAhead:(long long)a3 loadStepsAheadIfNoWiFi:(long long)a4;
- (void)_start;
- (void)_cancelStep:(id)a0;
- (void)_resetErrCounts;
- (void)_accumulateSteps;
- (void)_stop;
- (void)addTileSetStyle:(int)a0 betweenZoom:(unsigned int)a1 andZoom:(unsigned int)a2 restrictions:(unsigned long long)a3;
- (void)_loadStep:(id)a0 requireWiFi:(BOOL)a1;
- (void)_cancelAllSteps;
- (void)_cancelRequestsBehindCurrentPosition;
- (void)updateWithRoute:(id)a0 routeMatch:(id)a1;
- (void)performTearDown;
- (void)updateWithRouteMatch:(id)a0;
- (void)observedNetworkQualityDidChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)_retryFailuresWithErrorsReset:(BOOL)a0;
- (void)_performNextRequests;
- (void)addTileSetStyle:(int)a0 betweenZoom:(unsigned int)a1 andZoom:(unsigned int)a2;
- (void)_geodCrashed;
- (void)stop;

@end
