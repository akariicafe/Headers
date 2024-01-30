@class GEOMapAssetMetadataFetcher, NSMutableDictionary, GEOApplicationAuditToken, GEOSPRMetroAvailabilityFetcher, GEOTileKeyList;

@interface GEONavRoutePreloadStep : NSObject {
    struct { double latitude; double longitude; } coord;
    double routeIdx;
    NSMutableDictionary *wantedTiles;
    GEOTileKeyList *assetMetadataTiles;
    double startTime;
    double endTime;
    unsigned int bytesLoadedFromNetwork;
    unsigned int generation;
    int cellularCoverage;
    unsigned char nearManeuver : 1;
    unsigned char loading : 1;
    unsigned char loaded : 1;
    GEOApplicationAuditToken *_auditToken;
    GEOSPRMetroAvailabilityFetcher *_sprMetrosAvailabilityFetcher;
    GEOMapAssetMetadataFetcher *_assetMetadataFetcher;
    unsigned int _errorCount;
    unsigned int _lifetimeErrorCount;
    unsigned char _metrosSupported;
    unsigned long long _parentSignpostID;
    unsigned long long _signpostID;
}

@property (readonly, nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasLifetimeError;

- (void)cancel;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_loadAssetMetadataRequireWiFi:(BOOL)a0 unsuccessfulKeysAccumulator:(id)a1 errorsAccumulator:(id)a2 queue:(id)a3 willLoadHandler:(id /* block */)a4 progressHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (void)_loadTiles:(id)a0 requireWiFi:(BOOL)a1 unsuccessfulKeysAccumulator:(id)a2 errorsAccumulator:(id)a3 queue:(id)a4 group:(id)a5 willLoadHandler:(id /* block */)a6 progressHandler:(id /* block */)a7;
- (void)encounteredErrors:(id)a0;
- (id)initWithAuditToken:(id)a0 highZoomMetrosAvailabilityFetcher:(id)a1 assetMetadataFetcher:(id)a2 preloaderSignpostID:(unsigned long long)a3;
- (void)loadWithCallbackQueue:(id)a0 requireWiFi:(BOOL)a1 willLoadHandler:(id /* block */)a2 progressHandler:(id /* block */)a3 finishedHandler:(id /* block */)a4 errorHandler:(id /* block */)a5;
- (double)networkDataRateKB;
- (BOOL)okToLoad;
- (void)resetErrors;

@end
