@class NSString;

@interface PXStoryCropQualityComposabilityScorer : NSObject <PXStoryAutoEditComposabilityScorer> {
    struct vector<(anonymous namespace)::_PXStoryAutoEditCropScoreInfo, std::allocator<(anonymous namespace)::_PXStoryAutoEditCropScoreInfo>> { struct _PXStoryAutoEditCropScoreInfo *__begin_; struct _PXStoryAutoEditCropScoreInfo *__end_; struct __compressed_pair<(anonymous namespace)::_PXStoryAutoEditCropScoreInfo *, std::allocator<(anonymous namespace)::_PXStoryAutoEditCropScoreInfo>> { struct _PXStoryAutoEditCropScoreInfo *__value_; } __end_cap_; } _scores;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diagnosticDescription;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct _PXStoryAutoEditCropScoreInfo { struct _PXStoryAutoEditCropScore { float x0; float x1; } x0; struct _PXStoryAutoEditCropScore { float x0; float x1; } x1; })_computeCropScoreForDisplayAsset:(id)a0 diptychAspectRatio:(double)a1 triptychAspectRatio:(double)a2;
- (id)computeComposabilityScoresForDisplayAssets:(id)a0 error:(id *)a1;

@end
