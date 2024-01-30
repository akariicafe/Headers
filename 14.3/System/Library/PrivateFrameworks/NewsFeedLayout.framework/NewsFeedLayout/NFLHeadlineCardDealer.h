@class NFLRankedLayoutSource, NSString, NSOperationQueue, NFLFeedSettings;
@protocol NFLFeedLayoutSearchConfiguration;

@interface NFLHeadlineCardDealer : NSObject <NFLPipelayerDelegate, NFLRankedLayoutSourceDelegate, CALayerDelegate>

@property (copy, nonatomic) NFLFeedSettings *feedSettings;
@property (copy, nonatomic) id<NFLFeedLayoutSearchConfiguration> feedLayoutSearchConfiguration;
@property (retain, nonatomic) NFLRankedLayoutSource *rankedLayoutSource;
@property (retain, nonatomic) NSOperationQueue *tilingOperationQueue;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) double tileProminenceScoreBalanceValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)pipelayer:(id)a0 numberOfUnitsUsedBySegmentType:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFeedSettings:(id)a0 feedLayoutSearchConfiguration:(id)a1 tileProminenceScoreBalanceValue:(double)a2 qualityOfService:(long long)a3;
- (Class)rankedLayoutSource:(id)a0 rankedLayoutGenerationOperationClassForRequest:(id)a1;
- (void)_validateFeedLayout;
- (BOOL)pipelayer:(id)a0 maySegmentType:(unsigned long long)a1 usePipeUnits:(id)a2;
- (double)pipelayer:(id)a0 secondaryScoreOfPath:(id)a1 units:(id)a2;
- (id)batchesForTileInfos:(id)a0 previousBatchContext:(id)a1 nextBatchContext:(id)a2;
- (id)pipelayer:(id)a0 descriptionForSegmentType:(unsigned long long)a1;
- (id)batchesFromPipeSegments:(id)a0 tileInfos:(id)a1;
- (double)pipelayer:(id)a0 transitionRankFromSegmentType:(unsigned long long)a1 toSegmentType:(unsigned long long)a2;
- (void)pipelayer:(id)a0 segmentForUnits:(id)a1 segmentType:(unsigned long long)a2 qualityOfService:(long long)a3 completion:(id /* block */)a4;
- (id /* block */)_segmentTypeDescriptionProvider;
- (id)pipelayer:(id)a0 nextSegmentTypeCandidatesForSegmentType:(unsigned long long)a1;

@end
