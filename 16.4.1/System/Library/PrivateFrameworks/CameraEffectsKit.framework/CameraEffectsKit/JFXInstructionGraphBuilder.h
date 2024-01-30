@class PVColorSpace;

@interface JFXInstructionGraphBuilder : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } frameSize;
@property (retain, nonatomic) PVColorSpace *outputColorSpace;
@property (nonatomic) int renderingIntent;

+ (id)JFX_maskNode:(id)a0 maskRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 basisSize:(struct CGSize { double x0; double x1; })a2;
+ (double)JFX_scaleForMediaSize:(struct CGSize { double x0; double x1; })a0 mediaContentMode:(int)a1 clipAspectRatio:(double)a2 outputSize:(struct CGSize { double x0; double x1; })a3 outputContentMode:(int)a4;
+ (id)JFX_transformNode:(id)a0 scale:(double)a1;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })JFX_calculateCompositeNodeTransformForCropWithCompositeNodeOutputSize:(struct CGSize { double x0; double x1; })a0 mediaScale:(double)a1;
- (id)JFX_applyCustomRenderingPropertiesToInputNode:(id)a0 customRendererProperties:(id)a1 transformAnimation:(id)a2 transformAnimationContentMode:(int)a3 mediaScale:(double)a4;
- (id)JFX_mediaTransformAnimationForPlayableElement:(id)a0 liveTransform:(struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *)a1;
- (id)_buildTestXFormAnimation:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 baseTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 clipNaturalSize:(struct CGSize { double x0; double x1; })a2;
- (id)_sourceNodeForStillMediaItem:(id)a0 sourceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 transformAnimation:(id)a2 transformAnimationContentMode:(int)a3 presentationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4;
- (id)_sourceNodeForVideoMediaItem:(id)a0 sourceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 compositionTrackID:(int)a2 transformAnimation:(id)a3 transformAnimationContentMode:(int)a4;
- (id)applyEffectStack:(id)a0 presentationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 toInput:(id)a2;
- (id)applyEffectStack:(id)a0 toInput:(id)a1;
- (id)blendNodeForClipSourceNodes:(id)a0;
- (id)initWithOutputSize:(struct CGSize { double x0; double x1; })a0 frameSize:(struct CGSize { double x0; double x1; })a1 outputColorSpace:(id)a2;
- (id)instructionGraphForPlayableElement:(id)a0 presentationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 sourceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 compositionTrackID:(int)a3 liveTransform:(struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *)a4 excludingEffectType:(int)a5 customRendererProperties:(id)a6;
- (id)sourceNodeForGeneratorEffect:(id)a0 effectRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)sourceNodeForImageBuffer:(id)a0 sourceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)sourceNodeForMediaItem:(id)a0 sourceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 compositionTrackID:(int)a2 transformAnimation:(id)a3 transformAnimationContentMode:(int)a4 presentationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a5 mediaScale:(double)a6 playableAspectRatio:(long long)a7 playableAspectRatioPreservationMode:(long long)a8;

@end
