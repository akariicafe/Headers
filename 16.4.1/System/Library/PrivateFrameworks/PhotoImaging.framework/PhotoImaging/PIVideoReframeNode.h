@class PIReframeKeyframeSequence;
@protocol NUVideoProperties;

@interface PIVideoReframeNode : NURenderNode

@property (retain, nonatomic) PIReframeKeyframeSequence *keyframeSequence;
@property (nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } stabCropRect;
@property (retain, nonatomic) id<NUVideoProperties> inputVideoProperties;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
@property (nonatomic) BOOL shouldApplyWatermark;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateVideoProperties:(out id *)a0;
- (id)_stabilizeImage:(id)a0 cleanRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 transform:(struct { void /* unknown type, empty encoding */ x0[3]; })a3 geometry:(id)a4;
- (BOOL)canPropagateOriginalLivePhotoMetadataTrack;
- (id)initWithKeyframes:(id)a0 stabCropRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 input:(id)a2;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
