@class NSArray, NSString;

@interface NFLSingleAggregateTileFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration>

@property (retain, nonatomic) Class subBatchLayoutTilingOperationClass;
@property (retain, nonatomic) Class rankedLayoutGenerationOperationClass;
@property (nonatomic) long long cellType;
@property (nonatomic) long long rowSpan;
@property (nonatomic, getter=isShowingAccessoryText) BOOL showAccessoryText;
@property (readonly, nonatomic) unsigned long long preferredTileInfoBatchSize;
@property (readonly, nonatomic) NSArray *allRowTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)a0;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)nextRowTypeCandidatesForRowType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)a0;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)a0;
- (id)descriptionForRowType:(unsigned long long)a0;
- (BOOL)supportsTileInfoType:(unsigned long long)a0;
- (struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; })subBatchLayoutSeedForRowType:(unsigned long long)a0 withTileInfos:(id)a1;
- (double)transitionRankFromRowType:(unsigned long long)a0 toRowType:(unsigned long long)a1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)a0;
- (id)initWithSubBatchLayoutTilingOperationClass:(Class)a0 rankedLayoutGenerationOperationClass:(Class)a1 cellType:(long long)a2 rowSpan:(long long)a3;

@end
