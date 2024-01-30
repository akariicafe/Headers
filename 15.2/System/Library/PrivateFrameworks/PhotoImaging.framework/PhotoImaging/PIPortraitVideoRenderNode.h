@class NSArray, AVTimedMetadataGroup, AVMetadataItem;

@interface PIPortraitVideoRenderNode : NURenderNode

@property (readonly, copy, nonatomic) NSArray *disparityKeyframes;
@property (readonly, copy, nonatomic) NSArray *apertureKeyframes;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } renderTime;
@property (readonly, nonatomic) int renderQuality;
@property (readonly, nonatomic) long long debugMode;
@property (readonly, nonatomic) AVTimedMetadataGroup *timedMetadata;
@property (readonly, nonatomic) AVMetadataItem *globalMetadata;

- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (BOOL)requiresVideoComposition;
- (id)_evaluateImage:(out id *)a0;
- (id)uniqueInputNode;
- (id)initWithInput:(id)a0 disparityInput:(id)a1 disparityKeyframes:(id)a2 apertureKeyframes:(id)a3 debugMode:(long long)a4;
- (struct { long long x0; long long x1; })_targetScaleForScale:(struct { long long x0; long long x1; })a0;
- (BOOL)_prewarmPortraitRendererWithPipelineState:(id)a0 error:(out id *)a1;
- (id)sourceTransferFunction;
- (int)_portraitQualityForRenderScale:(struct { long long x0; long long x1; })a0;

@end
