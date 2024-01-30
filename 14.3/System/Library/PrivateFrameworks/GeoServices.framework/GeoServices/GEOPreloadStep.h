@class GEOTileKeyList;

@interface GEOPreloadStep : NSObject {
    struct { double latitude; double longitude; } coord;
    double routeIdx;
    GEOTileKeyList *wantedTiles;
    double startTime;
    double endTime;
    unsigned int bytesLoaded;
    unsigned int bytesLoadedFromNetwork;
    unsigned int generation;
    unsigned int numRetries;
    unsigned char hasError : 1;
    unsigned char hasLifetimeError : 1;
    unsigned char nearManeuver : 1;
    unsigned char loading : 1;
    unsigned char loaded : 1;
}

- (void)resetErrors;
- (double)networkDataRateKB;
- (void).cxx_destruct;
- (BOOL)okToLoad;

@end
