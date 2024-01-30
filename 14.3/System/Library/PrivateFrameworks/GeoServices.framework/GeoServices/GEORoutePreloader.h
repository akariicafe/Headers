@class GEOComposedRoute, NSString, NSArray, GEOApplicationAuditToken, NSObject, geo_isolater;
@protocol OS_dispatch_queue;

@interface GEORoutePreloader : NSObject <GEOTileLoaderObserver> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSArray *_strategies;
    BOOL _running;
    unsigned long long _networkQuality;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _didTearDown;
    geo_isolater *_deviceQualitiesIsolation;
    int _batteryNotificationToken;
    BOOL _pluggedIn;
    geo_isolater *_statisticsIsolation;
    unsigned long long _statisticsCounts[5];
    unsigned long long _tilesUsed;
    unsigned long long _nonPreloadedTilesLoadedFromNetwork;
    unsigned long long _nonPreloadedTilesFailed;
    BOOL _hasStartedStatistics;
    double _statisticsStartMonotonicTimestamp;
}

@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) unsigned long long networkQuality;
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPluggedIn;
- (void)_stop;
- (void)_start;
- (id)initWithRoute:(id)a0 strategies:(id)a1 auditToken:(id)a2;
- (void)_performTearDown;
- (id)init;
- (void)_unregisterForNetworkQualityObservation;
- (void)_unregisterForBatteryStatusChanges;
- (void)_finalizeStatistics;
- (void)_registerForBatteryStatusChanges;
- (void)_registerForNetworkQualityObservation;
- (void)updateWithRouteMatch:(id)a0;
- (void)_networkReachabilityChanged:(id)a0;
- (id)initWithRoute:(id)a0 strategies:(id)a1;
- (void)_updateObservedNetworkPerformanceForDownload:(unsigned long long)a0 duration:(double)a1;
- (void)_updateBatteryState;
- (void)updateObservedNetworkPerformanceForDownload:(unsigned long long)a0 duration:(double)a1;
- (void)updateObservedNetworkPerformanceWithServerError;
- (void)incrementTileLoadStatistic:(long long)a0 amount:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)tileLoader:(id)a0 loadedTileKey:(const struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned long x3 : 36; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned int x5 : 22; } x7; struct _GEOIdentifiedResourceKey { unsigned int x0; unsigned char x1; unsigned char x2; unsigned long x3 : 64; unsigned char x4 : 8; } x8; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x9; struct _GEOVisualLocalizationTrackKey { unsigned short x0; unsigned char x1; unsigned short x2 : 16; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x10; struct _GEOVisualLocalizationMetadataKey { unsigned char x0 : 6; unsigned short x1 : 9; unsigned int x2 : 25; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x11; struct _GEOVisualLocalizationDataKey { unsigned long long x0; unsigned char x1; unsigned char x2 : 5; unsigned int x3 : 21; unsigned int x4 : 21; unsigned char x5 : 1; } x12; } x2; } *)a1 fromSource:(long long)a2 withOptions:(unsigned long long)a3;
- (void)tileLoader:(id)a0 failedTileKey:(const struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned long x3 : 36; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned int x5 : 22; } x7; struct _GEOIdentifiedResourceKey { unsigned int x0; unsigned char x1; unsigned char x2; unsigned long x3 : 64; unsigned char x4 : 8; } x8; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x9; struct _GEOVisualLocalizationTrackKey { unsigned short x0; unsigned char x1; unsigned short x2 : 16; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x10; struct _GEOVisualLocalizationMetadataKey { unsigned char x0 : 6; unsigned short x1 : 9; unsigned int x2 : 25; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x11; struct _GEOVisualLocalizationDataKey { unsigned long long x0; unsigned char x1; unsigned char x2 : 5; unsigned int x3 : 21; unsigned int x4 : 21; unsigned char x5 : 1; } x12; } x2; } *)a1 error:(id)a2 withOptions:(unsigned long long)a3;
- (void)start;
- (void)tearDown;

@end
