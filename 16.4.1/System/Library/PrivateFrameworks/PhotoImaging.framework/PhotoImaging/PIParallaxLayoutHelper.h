@class CIImage, CIContext;

@interface PIParallaxLayoutHelper : PFParallaxLayoutHelper {
    CIContext *_context;
    CIImage *_matte;
}

- (void).cxx_destruct;
- (id)initWithParallaxClassification:(unsigned long long)a0 initialRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 effectiveAcceptableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 effectivePreferredRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 layoutConfiguration:(id)a5;
- (id)intermediateWithInactiveStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithOverlapStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithZoomStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)scoreIntermediate:(id)a0;
- (id)initWithCIContext:(id)a0 matte:(id)a1 parallaxClassification:(unsigned long long)a2 initialRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 imageSize:(struct CGSize { double x0; double x1; })a4 effectiveAcceptableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 effectivePreferredRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 layoutConfiguration:(id)a7;
- (id)pixelBasedIntermediateWithOverlapStrategy:(unsigned long long)a0 intermediate:(id)a1 translationY:(double)a2;

@end
