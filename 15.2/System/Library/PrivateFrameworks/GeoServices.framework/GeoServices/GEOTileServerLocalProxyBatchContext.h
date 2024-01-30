@class GEOTileRequester, GEOTileKeyList;

@interface GEOTileServerLocalProxyBatchContext : NSObject

@property (retain, nonatomic) GEOTileKeyList *fullList;
@property (retain, nonatomic) GEOTileKeyList *interestList;
@property (retain, nonatomic) GEOTileKeyList *networkList;
@property (retain, nonatomic) GEOTileKeyList *pendingNetworkList;
@property (retain, nonatomic) GEOTileKeyList *cacheMissNoDataList;
@property (retain, nonatomic) GEOTileKeyList *cacheMissStaleDataList;
@property (retain, nonatomic) GEOTileKeyList *cacheMissStaleUnusableDataList;
@property (nonatomic) unsigned char loadReason;
@property (nonatomic) BOOL proactivelyLoadOnFailure;
@property (retain, nonatomic) GEOTileRequester *tileRequester;

- (void).cxx_destruct;

@end
