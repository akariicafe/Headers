@class PXGShader, PXGUniform;

@interface PXGEdgeStretchEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_sampleRect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sampleRect;

- (id)initWithEntityManager:(id)a0;
- (void).cxx_destruct;
- (id)shader;

@end
