@class NSArray, NSString;

@interface NFLTrendingFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration>

@property (nonatomic) unsigned long long feedLayoutType;
@property (nonatomic) long long groupConfigurationType;
@property (nonatomic, getter=isShowingAccessoryText) BOOL showAccessoryText;
@property (readonly, nonatomic) unsigned long long preferredTileInfoBatchSize;
@property (readonly, nonatomic) NSArray *allRowTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)a0;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)a0;
- (id)nextRowTypeCandidatesForRowType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)mayRowType:(unsigned long long)a0 useTileInfos:(id)a1 withPreferedContentSizeCategory:(id)a2;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)a0;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)a0;
- (id)descriptionForRowType:(unsigned long long)a0;
- (BOOL)supportsTileInfoType:(unsigned long long)a0;
- (id)preferredOrderingOfTileInfos:(id)a0;
- (struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; })subBatchLayoutSeedForRowType:(unsigned long long)a0 withTileInfos:(id)a1;
- (double)transitionRankFromRowType:(unsigned long long)a0 toRowType:(unsigned long long)a1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)a0;
- (Class)_tilingOperationClassForRowType:(unsigned long long)a0;
- (id)initWithTrendingArticlesFeedLayoutType:(unsigned long long)a0 groupConfigurationType:(long long)a1;

@end
