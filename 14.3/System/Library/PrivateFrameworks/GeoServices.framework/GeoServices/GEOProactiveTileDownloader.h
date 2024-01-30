@class GEOXPCActivity, NSString, GEOResourceManifestManager, GEORequestCounter, GEOStaleTileUpdater, NSDictionary, GEOBatchOpportunisticTileDownloader, NSObject, GEODataSaverTileLoaderManager, GEOTileDB, NSMutableArray, GEOPowerAssertion;
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
    BOOL _policyEnabled[1];
    GEOPowerAssertion *_powerAssertion;
    GEOXPCActivity *_activity;
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

- (void)cancel;
- (void)_start;
- (id)init;
- (void)_startNextDownloader;
- (void).cxx_destruct;
- (void)_registerXPCActivity;
- (void)_clearXPCDeferralTimer;
- (void)_xpcActivityFired;
- (void)_finish;
- (void)batchOpportunisticTileDownloaderDidFinish:(id)a0;
- (void)_registerXPCDeferralTimer;
- (void)batchOpportunisticTileDownloader:(id)a0 failedToLoadKey:(struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned long x3 : 36; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned int x5 : 22; } x7; struct _GEOIdentifiedResourceKey { unsigned int x0; unsigned char x1; unsigned char x2; unsigned long x3 : 64; unsigned char x4 : 8; } x8; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x9; struct _GEOVisualLocalizationTrackKey { unsigned short x0; unsigned char x1; unsigned short x2 : 16; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x10; struct _GEOVisualLocalizationMetadataKey { unsigned char x0 : 6; unsigned short x1 : 9; unsigned int x2 : 25; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x11; struct _GEOVisualLocalizationDataKey { unsigned long long x0; unsigned char x1; unsigned char x2 : 5; unsigned int x3 : 21; unsigned int x4 : 21; unsigned char x5 : 1; } x12; } x2; })a1 error:(id)a2;
- (void)batchOpportunisticTileDownloader:(id)a0 receivedData:(id)a1 tileEdition:(unsigned int)a2 tileSet:(unsigned int)a3 etag:(id)a4 forKey:(struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned long x3 : 36; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned int x5 : 22; } x7; struct _GEOIdentifiedResourceKey { unsigned int x0; unsigned char x1; unsigned char x2; unsigned long x3 : 64; unsigned char x4 : 8; } x8; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x9; struct _GEOVisualLocalizationTrackKey { unsigned short x0; unsigned char x1; unsigned short x2 : 16; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x10; struct _GEOVisualLocalizationMetadataKey { unsigned char x0 : 6; unsigned short x1 : 9; unsigned int x2 : 25; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x11; struct _GEOVisualLocalizationDataKey { unsigned long long x0; unsigned char x1; unsigned char x2 : 5; unsigned int x3 : 21; unsigned int x4 : 21; unsigned char x5 : 1; } x12; } x2; })a5 userInfo:(id)a6;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 diskCache:(id)a2 dataSaverManager:(id)a3 manifestManager:(id)a4 requestCounter:(id)a5 downloaders:(id)a6;
- (void)_takePowerAssertionIfNecessary;
- (void)start;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 diskCache:(id)a2;
- (void)_clearPowerAssertion;
- (void)_pauseIfNecessary;

@end
