@interface NFLPairSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation

@property (nonatomic) BOOL preferImageOnSidePairs;

+ (unsigned long long)tileInfosUsedCount;

- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)a0;
- (BOOL)isReliable;
- (id)rankedLayoutRequests;

@end
