@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing> {
    id gradientEvaluator;
    struct CGFunction { } *colorShader;
    struct CGColorSpace { } *colorSpace;
    struct CGImage { } *_gradientImage;
}

- (id)fillColor;
- (BOOL)isDithered;
- (int)blendMode;
- (void)dealloc;
- (struct CGImage { } *)_createRadialGradientImageWithWidth:(double)a0 height:(double)a1;
- (id)_initWithGradientEvaluator:(id)a0 colorSpace:(struct CGColorSpace { } *)a1;
- (id)colorLocations;
- (id)colorStops;
- (void)drawAngleGradientInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeCenterPosition:(struct CGPoint { double x0; double x1; })a1 withContext:(struct CGContext { } *)a2;
- (void)drawFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 options:(unsigned long long)a2 withContext:(struct CGContext { } *)a3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 angle:(double)a1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 angle:(double)a1 options:(unsigned long long)a2 withContext:(struct CGContext { } *)a3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 angle:(double)a1 withContext:(struct CGContext { } *)a2;
- (void)drawRadialGradientInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeCenterPosition:(struct CGPoint { double x0; double x1; })a1 withContext:(struct CGContext { } *)a2;
- (id)gradientByApplyingEffects:(id)a0;
- (id)initWithColors:(id)a0 colorlocations:(id)a1 colorMidpoints:(id)a2 opacities:(id)a3 opacityLocations:(id)a4 opacityMidpoints:(id)a5 smoothingCoefficient:(double)a6 fillColor:(id)a7 colorSpace:(struct CGColorSpace { } *)a8;
- (id)initWithColors:(id)a0 colorlocations:(id)a1 colorMidpoints:(id)a2 opacities:(id)a3 opacityLocations:(id)a4 opacityMidpoints:(id)a5 smoothingCoefficient:(double)a6 fillColor:(id)a7 colorSpace:(struct CGColorSpace { } *)a8 dither:(BOOL)a9;
- (id)interpolatedColorAtLocation:(double)a0;
- (id)opacityLocations;
- (id)opacityStops;
- (double)smoothingCoefficient;

@end
