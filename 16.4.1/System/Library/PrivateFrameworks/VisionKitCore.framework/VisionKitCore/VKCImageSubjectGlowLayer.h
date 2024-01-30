@class CALayer;

@interface VKCImageSubjectGlowLayer : CALayer

@property (retain, nonatomic) CALayer *glowLayer;
@property (nonatomic) BOOL active;

- (id)thinGlowParametersWithScreenScale:(double)a0 viewScale:(double)a1;
- (void)renderGlowParameters:(id)a0 path:(struct CGPath { } *)a1 pathLength:(double)a2 duration:(double)a3 maxStrokeLengthFraction:(id)a4;
- (void)hideGlow:(BOOL)a0;
- (id)animationWithKeyPath:(id)a0 beginTime:(double)a1 duration:(double)a2;
- (id)animationGroupWithDuration:(double)a0 beginTime:(double)a1 animations:(id)a2;
- (void)beginAnimationWithViewScale:(double)a0 screenScale:(double)a1 path:(id)a2;
- (void)stopAnimationAnimated:(BOOL)a0;
- (id)init;
- (void)configureAnimationWithViewScale:(double)a0 screenScale:(double)a1 path:(id)a2;
- (id)shapeLayerLineWidth:(double)a0 opacity:(double)a1 path:(struct CGPath { } *)a2;
- (id)thickGlowParametersWithViewScale:(double)a0;
- (void).cxx_destruct;

@end
