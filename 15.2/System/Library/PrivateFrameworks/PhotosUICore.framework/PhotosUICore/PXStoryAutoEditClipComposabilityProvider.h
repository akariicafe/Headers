@class NSError, NSObject;
@protocol PXStoryAutoEditComposabilityScorer, PXStoryComposabilityResults, OS_os_log, PXDisplayAssetFetchResult;

@interface PXStoryAutoEditClipComposabilityProvider : NSObject {
    id<PXStoryComposabilityResults> _similarityScoreResults;
    id<PXStoryComposabilityResults> _cropScoreResults;
    id<PXStoryComposabilityResults> _composabilityResults;
    NSObject<OS_os_log> *_log;
}

@property (retain, nonatomic) id<PXDisplayAssetFetchResult> displayAssets;
@property (retain, nonatomic) id<PXStoryAutoEditComposabilityScorer> cropQualityScorer;
@property (retain, nonatomic) id<PXStoryAutoEditComposabilityScorer> similarityScorer;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSError *error;

- (id)results;
- (id)diagnosticDescription;
- (void).cxx_destruct;
- (id)initWithDisplayAssets:(id)a0;
- (void)_computeComposabilityScores;
- (struct { float x0; float x1; })composabilityScoresForDisplayAssetIndex:(unsigned long long)a0;

@end
