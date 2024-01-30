@interface NFLViewControllerSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation

+ (unsigned long long)tileInfosUsedCount;
+ (BOOL)validTileInfoType:(id)a0;

- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)a0;
- (BOOL)isReliable;
- (id)rankedLayoutRequests;

@end
