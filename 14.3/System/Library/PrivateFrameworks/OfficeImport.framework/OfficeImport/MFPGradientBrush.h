@class NSArray;

@interface MFPGradientBrush : MFPBrush {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mTransform;
    NSArray *mBlend;
    NSArray *mColorBlend;
    int mWrapMode;
    NSArray *mStops;
    struct CGShading { } *mShading;
    struct CGFunction { } *mShadingFunction;
}

- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)init;
- (id)endColor;
- (void).cxx_destruct;
- (void)dealloc;
- (id)color;
- (id)startColor;
- (void)fillPath:(id)a0;
- (void)setWrapMode:(int)a0;
- (void)setBlend:(id)a0;
- (void)setColorBlend:(id)a0;
- (void)createPhoneBrush;
- (id)colorAtPosition:(float)a0;
- (void)createStopsFromColorBlend;
- (void)createStopsFromBlend;
- (void)createStopsFromStartAndEndColors;
- (void)createShadingFunction;
- (void)createShading;

@end
