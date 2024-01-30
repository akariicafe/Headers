@class NSMapTable, GEODataSaverTileLoaderManager, GEOTileDB, NSDictionary, NSObject, GEOStaleTileUpdater, GEOPowerAssertion, GEORequestCounter, NSMutableArray, NSString, GEOResourceManifestManager, GEOXPCActivity, GEOBatchOpportunisticTileDownloader;
@protocol OS_dispatch_queue, GEOProactiveTileDownloaderDelegate, OS_dispatch_source;

@interface GEOProactiveTileDownloader : NSObject <GEOBatchOpportunisticTileDownloaderDelegate> {
    NSString *_uniqueIdentifier;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    id<GEOProactiveTileDownloaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    GEOTileDB *_diskCache;
    NSString *_startCountry;
    NSString *_startRegion;
    GEODataSaverTileLoaderManager *_dataSaverManager;
    GEOResourceManifestManager *_manifestManager;
    GEORequestCounter *_requestCounter;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _didStart;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _didFinish;
    NSDictionary *_testDownloaders;
    NSMutableArray *_remainingPolicies;
    GEOStaleTileUpdater *_staleUpdater;
    unsigned long long _currentPolicy;
    GEOBatchOpportunisticTileDownloader *_currentDownloader;
    BOOL _policyEnabled[2];
    GEOPowerAssertion *_powerAssertion;
    GEOXPCActivity *_activity;
    NSMapTable *_tileRequesterClasses;
    NSObject<OS_dispatch_source> *_deferCheckinTimer;
}

@property (class, readonly, nonatomic) unsigned long long maximumDownloadBatchSize;
@property (class, readonly, nonatomic) BOOL usesDiscretionaryDownloads;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canUseXPCActivity;
+ (BOOL)shouldDownloadTileType:(int)a0;

- (void)_start;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 diskCache:(id)a2 tileRequesterClasses:(id)a3 dataSaverManager:(id)a4 manifestManager:(id)a5 requestCounter:(id)a6 downloaders:(id)a7;
- (void)_finish;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 diskCache:(id)a2 tileRequesterClasses:(id)a3;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)_pauseIfNecessary;
- (void)_clearXPCDeferralTimer;
- (void)_clearPowerAssertion;
- (void)_xpcActivityFired;
- (void)_takePowerAssertionIfNecessary;
- (void)_registerXPCDeferralTimer;
- (void)_startNextDownloader;
- (void)_registerXPCActivity;
- (void)batchOpportunisticTileDownloader:(id)a0 failedToLoadKey:(struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned long x3 : 36; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned short x5 : 16; unsigned char x6 : 6; } x7; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3 : 1; unsigned long x4 : 39; } x8; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x9; struct _GEOVisualLocalizationTrackKey { unsigned short x0; unsigned char x1; unsigned short x2 : 16; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x10; struct _GEOVisualLocalizationMetadataKey { unsigned char x0 : 6; unsigned short x1 : 9; unsigned int x2 : 25; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x11; struct _GEOVisualLocalizationDataKey { unsigned long long x0; unsigned char x1; unsigned char x2 : 5; unsigned int x3 : 21; unsigned int x4 : 21; unsigned char x5 : 1; } x12; struct _GEOS2TileKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 3; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; unsigned long x7 : 37; } x13; } x2; })a1 error:(id)a2;
- (void)batchOpportunisticTileDownloader:(id)a0 receivedData:(id)a1 tileEdition:(unsigned int)a2 tileSet:(union { unsigned int x0; struct { unsigned char x0 : 8; union { struct { unsigned short x0 : 14; unsigned char x1 : 4; unsigned char x2 : 4; } x0; struct { unsigned char x0 : 8; unsigned short x1 : 16; } x1; } x1; } x1; })a3 etag:(id)a4 forKey:(struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned long x3 : 36; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned short x5 : 16; unsigned char x6 : 6; } x7; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3 : 1; unsigned long x4 : 39; } x8; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x9; struct _GEOVisualLocalizationTrackKey { unsigned short x0; unsigned char x1; unsigned short x2 : 16; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x10; struct _GEOVisualLocalizationMetadataKey { unsigned char x0 : 6; unsigned short x1 : 9; unsigned int x2 : 25; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x11; struct _GEOVisualLocalizationDataKey { unsigned long long x0; unsigned char x1; unsigned char x2 : 5; unsigned int x3 : 21; unsigned int x4 : 21; unsigned char x5 : 1; } x12; struct _GEOS2TileKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 3; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; unsigned long x7 : 37; } x13; } x2; })a5 userInfo:(id)a6;
- (void)batchOpportunisticTileDownloaderDidFinish:(id)a0;

@end
