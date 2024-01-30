@interface JFXInstructionGraphBuilder : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) int renderingIntent;

- (id)initWithOutputSize:(struct CGSize { double x0; double x1; })a0 frameSize:(struct CGSize { double x0; double x1; })a1;
- (id)instructionGraphForPlayableElement:(id)a0 presentationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 sourceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 compositionTrackID:(int)a3 liveTransform:(struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; } *)a4 excludingEffectType:(int)a5 customRendererProperties:(id)a6;
- (id)_sourceNodeForVideoMediaItem:(id)a0 sourceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 compositionTrackID:(int)a2 transformAnimation:(id)a3;
- (id)_sourceNodeForStillMediaItem:(id)a0 sourceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 transformAnimation:(id)a2 presentationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3;
- (id)applyEffectStack:(id)a0 presentationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 toInput:(id)a2;
- (id)sourceNodeForMediaItem:(id)a0 sourceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 compositionTrackID:(int)a2 transformAnimation:(id)a3 presentationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4;
- (id)JFX_applyCustomRenderingPropertiesToInputNode:(id)a0 customRendererProperties:(id)a1 transformAnimation:(id)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })JFX_calculateCompositeNodeTransformForCropWithCompositeNodeOutputSize:(struct CGSize { double x0; double x1; })a0;
- (id)blendNodeForClipSourceNodes:(id)a0;
- (id)sourceNodeForImageBuffer:(id)a0 sourceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)sourceNodeForGeneratorEffect:(id)a0 effectRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)applyEffectStack:(id)a0 toInput:(id)a1;
- (id)_buildTestXFormAnimation:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 baseTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 clipNaturalSize:(struct CGSize { double x0; double x1; })a2;

@end
