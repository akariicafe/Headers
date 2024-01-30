@protocol PROAPIAccessing;

@interface PAESharedDefaultBase : NSObject {
    id<PROAPIAccessing> _apiManager;
    BOOL _upscalesFields;
    BOOL _hostIsFinalCutPro;
    BOOL _hostIsVertigo;
    BOOL _ignorePixelAspectRatio;
}

- (id)properties;
- (void)dealloc;
- (double)frameRate;
- (id)initWithAPIManager:(id)a0;
- (BOOL)addParameters;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })getInversePixelTransformForImage:(id)a0;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })getPixelTransformForImage:(id)a0;
- (void)overrideFrameSetupForRenderMode:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 hardware:(BOOL *)a1 software:(BOOL *)a2;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (int)getRenderMode:(union { double x0; struct *x1; })a0;
- (struct PCVector2<double> { double x0; double x1; })convertRelativeToPixelCoordinates:(const struct PCVector2<double> { double x0; double x1; } *)a0 withImage:(id)a1;
- (BOOL)getPoint:(struct PCVector2<double> { double x0; double x1; } *)a0 fromParm:(unsigned int)a1 atTime:(union { double x0; struct *x1; })a2 withImage:(id)a3;
- (struct PCVector2<double> { double x0; double x1; })getScaleForImage:(id)a0;
- (BOOL)getHeliumImage:(id *)a0 layerOffsetX:(double *)a1 layerOffsetY:(double *)a2 requestInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3 fromParm:(int)a4 atTime:(union { double x0; struct *x1; })a5;
- (void)transform:(struct HGRef<HGNode> { struct HGNode *x0; } *)a0 fromImage:(id)a1 toImage:(id)a2 fit:(BOOL)a3;
- (void)crop:(struct HGRef<HGNode> { struct HGNode *x0; } *)a0 fromImage:(id)a1 toImage:(id)a2;
- (struct PCRect<float> { float x0; float x1; float x2; float x3; })getImageBoundary:(id)a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })smear:(struct HGRef<HGNode> { struct HGNode *x0; })a0 fromImage:(id)a1 toImage:(id)a2;
- (BOOL)variesOverTime;
- (BOOL)frameCleanup;
- (float)getBlendingGamma;
- (struct HGRef<HGNode> { struct HGNode *x0; })transformFromImage:(id)a0 toImage:(id)a1 fit:(BOOL)a2;
- (void)setIgnoresPixelAspectRatio:(BOOL)a0;
- (struct PCVector2<double> { double x0; double x1; })convertRelativeToImageCoordinates:(const struct PCVector2<double> { double x0; double x1; } *)a0 withImage:(id)a1;
- (double)secondsFromFxTime:(union { double x0; struct *x1; })a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })changeDOD:(struct HGRef<HGNode> { struct HGNode *x0; })a0 withRect:(const struct PCRect<double> { double x0; double x1; double x2; double x3; } *)a1;
- (BOOL)getHeliumImage:(id *)a0 source:(BOOL)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2 atTime:(union { double x0; struct *x1; })a3;
- (double)frameFromFxTime:(union { double x0; struct *x1; })a0 forPlugIn:(id)a1;
- (double)relativeShutterForAngle:(double)a0;
- (struct PCRect<float> { float x0; float x1; float x2; float x3; })getCropRectFromImage:(id)a0 toImage:(id)a1;
- (BOOL)getCropRectFromImage:(id)a0 toImage:(id)a1 output:(struct PCRect<float> { float x0; float x1; float x2; float x3; } *)a2;
- (void)crop:(struct HGRef<HGNode> { struct HGNode *x0; } *)a0 withRect:(struct PCRect<float> { float x0; float x1; float x2; float x3; })a1;
- (struct HGRef<HGNode> { struct HGNode *x0; })cropFromImage:(id)a0 toImage:(id)a1;
- (BOOL)smear:(struct HGRef<HGNode> { struct HGNode *x0; })a0 fromImage:(id)a1 toImage:(id)a2 resultNode:(struct HGRef<HGNode> { struct HGNode *x0; } *)a3;
- (BOOL)ignoresPixelAspectRatio;
- (void)fxTime:(union { double x0; struct *x1; } *)a0 fromFrame:(double)a1 forPlugIn:(id)a2;

@end
