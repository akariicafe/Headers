@class NSString, _GEOTransitRoutePreloaderData, GEORoutePreloader, GEOComposedRoute, NSMutableDictionary, NSObject, GEOMapServiceTraits, GEOTransitSuggestedRoute;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOTransitRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy> {
    GEOTransitSuggestedRoute *_suggestedRoute;
    _GEOTransitRoutePreloaderData *_reserved;
    GEOMapServiceTraits *_traits;
    double _endRoutePosition;
    unsigned long long _indexOfLastStepWithPreparedBatch;
    double _radialDistanceToImplicateTilesMeters;
    long long _tilesRequested;
    BOOL _shouldPreloadEntireRoute;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_geodCrashTimer;
    double _currentRoutePosition;
    int _downloadState;
    double _stepSizeInMeters;
    BOOL _enabled;
    NSMutableDictionary *_tileSetStyles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) GEORoutePreloader *preloader;
@property (retain, nonatomic) GEOComposedRoute *route;

- (void)_stop;
- (void)_start;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (id)init;
- (void)updateWithRoute:(id)a0 routeMatch:(id)a1;
- (void)performTearDown;
- (void)updateWithRouteMatch:(id)a0;
- (void)observedNetworkQualityDidChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)_resetErrorCounts;
- (void)_retryFailuresWithErrorsReset:(BOOL)a0;
- (void)_performNextRequests;
- (void)addTileSetStyle:(int)a0 betweenZoom:(unsigned int)a1 andZoom:(unsigned int)a2;
- (void)_cancelAllBatches;
- (struct PolylineCoordinate { unsigned int x0; float x1; })_polylineCoordinateForDouble:(double)a0;
- (void)_makeBatchesForSteps:(id)a0;
- (void)_processBatches;
- (void)_makeBatchForTilesAroundStationsForSteps:(id)a0;
- (void)_makePreloadBatchForSteps:(id)a0;
- (void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)a0;
- (void)_makePreloadBatchForPlaceDataOnSteps:(id)a0;
- (void)_loadTilesForBatch:(id)a0;
- (void)_geodCrashed;
- (long long)tilesRequested;
- (void)_makePreloadBatchForTilesOnRouteWithSteps:(id)a0 andPriority:(unsigned int)a1;
- (void)_loadPlacecardsForBatch:(id)a0;
- (void)_processedFinishedBatch:(id)a0 withPartialStatus:(unsigned long long)a1;
- (void)setShouldPreloadEntireRoute:(BOOL)a0;
- (void)start;
- (void)setTraits:(id)a0;

@end
