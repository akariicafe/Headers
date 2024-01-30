@interface NFLJupiterSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation

+ (unsigned long long)tileInfosUsedCount;
+ (BOOL)mayTileInfosTileSubBatchLayout:(id)a0 withLayoutSeed:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; })a1;

- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)a0;
- (id)rankedLayoutRequests;

@end
