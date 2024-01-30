@class NFLRankedLayoutSource, NSArray, NFLSubBatchLayout, NFLFeedSettings;

@interface NFLSubBatchLayoutTilingOperation : FCOperation

@property (copy) NFLFeedSettings *feedSettings;
@property (copy) NSArray *tileInfos;
@property (retain) NFLRankedLayoutSource *rankedLayoutSource;
@property double tileProminenceScoreBalanceValue;
@property (copy, nonatomic) NFLSubBatchLayout *result;
@property (nonatomic) struct { long long typeACellType; long long typeAColumnSpan; long long typeARowSpan; long long typeBCellType; long long typeBColumnSpan; long long typeBRowSpan; long long typeCCellType; long long typeCColumnSpan; long long typeCRowSpan; } layoutSeed;
@property (nonatomic, getter=isShowingAccessoryText) BOOL showingAccessoryText;
@property (copy) id /* block */ tilingCompletionBlock;

+ (unsigned long long)tileInfosUsedCount;
+ (BOOL)mayTileInfosTileSubBatchLayout:(id)a0 withLayoutSeed:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; })a1;
+ (BOOL)validTileInfoType:(id)a0;
+ (BOOL)tileInfosHaveValidType:(id)a0;

- (id)init;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isReliable;
- (void)performOperation;
- (id)rankedLayoutRequests;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithTileInfos:(id)a0 feedSettings:(id)a1 rankedLayoutSource:(id)a2 tileProminenceScoreBalanceValue:(double)a3 layoutSeed:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; })a4 showingAccessoryText:(BOOL)a5;

@end
