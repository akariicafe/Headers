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

- (id)color;
- (void)fillPath:(id)a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)endColor;
- (id)startColor;
- (void)setWrapMode:(int)a0;
- (id)colorAtPosition:(float)a0;
- (void)createPhoneBrush;
- (void)createShading;
- (void)createShadingFunction;
- (void)createStopsFromBlend;
- (void)createStopsFromColorBlend;
- (void)createStopsFromStartAndEndColors;
- (void)setBlend:(id)a0;
- (void)setColorBlend:(id)a0;

@end
