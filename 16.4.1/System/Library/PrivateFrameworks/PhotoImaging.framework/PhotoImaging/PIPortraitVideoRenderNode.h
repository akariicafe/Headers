@class NSArray, PTGlobalRenderingMetadata, PIPortraitVideoMetadataSample;

@interface PIPortraitVideoRenderNode : NURenderNode

@property (readonly, copy, nonatomic) NSArray *disparityKeyframes;
@property (readonly, copy, nonatomic) NSArray *apertureKeyframes;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } renderTime;
@property (readonly, nonatomic) int renderQuality;
@property (readonly, nonatomic) long long debugMode;
@property (readonly, nonatomic) PTGlobalRenderingMetadata *globalMetadata;
@property (readonly, nonatomic) PIPortraitVideoMetadataSample *timedMetadata;

- (id)_evaluateImage:(out id *)a0;
- (int)_portraitQualityForRenderScale:(struct { long long x0; long long x1; })a0;
- (id)uniqueInputNode;
- (BOOL)_prewarmPortraitRendererWithPipelineState:(id)a0 error:(out id *)a1;
- (struct __CVBuffer { } *)_sourceBufferFromInput:(id)a0 error:(out id *)a1;
- (struct { long long x0; long long x1; })_targetScaleForScale:(struct { long long x0; long long x1; })a0;
- (id)initWithInput:(id)a0 disparityInput:(id)a1 disparityKeyframes:(id)a2 apertureKeyframes:(id)a3 debugMode:(long long)a4;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)sourceTransferFunction;
- (BOOL)useSourceBuffersDirectly;

@end
