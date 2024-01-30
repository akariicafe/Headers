@protocol PROAPIAccessing;

@interface PAESharedDefaultBase : NSObject {
    id<PROAPIAccessing> _apiManager;
    BOOL _upscalesFields;
    BOOL _hostIsFinalCutPro;
    BOOL _hostIsVertigo;
}

- (id)properties;
- (void)dealloc;
- (double)frameRate;
- (struct HGRef<HGNode> { struct HGNode *x0; })transformFromImage:(id)a0 toImage:(id)a1 fit:(BOOL)a2;
- (BOOL)addParameters;
- (struct HGRef<HGNode> { struct HGNode *x0; })changeDOD:(struct HGRef<HGNode> { struct HGNode *x0; })a0 withRect:(const void *)a1;
- (struct PCVector2<double> { double x0; double x1; })convertRelativeToImageCoordinates:(const void *)a0 withImage:(id)a1;
- (struct PCVector2<double> { double x0; double x1; })convertRelativeToPixelCoordinates:(const void *)a0 withImage:(id)a1;
- (void)crop:(void *)a0 fromImage:(id)a1 toImage:(id)a2;
- (void)crop:(void *)a0 withRect:(struct PCRect<float> { float x0; float x1; float x2; float x3; })a1;
- (struct HGRef<HGNode> { struct HGNode *x0; })cropFromImage:(id)a0 toImage:(id)a1;
- (BOOL)frameCleanup;
- (double)frameFromFxTime:(union { double x0; struct *x1; })a0 forPlugIn:(id)a1;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (void)fxTime:(union { double x0; struct *x1; } *)a0 fromFrame:(double)a1 forPlugIn:(id)a2;
- (float)getBlendingGamma;
- (struct PCRect<float> { float x0; float x1; float x2; float x3; })getCropRectFromImage:(id)a0 toImage:(id)a1;
- (BOOL)getCropRectFromImage:(id)a0 toImage:(id)a1 output:(void *)a2;
- (BOOL)getHeliumImage:(id *)a0 layerOffsetX:(double *)a1 layerOffsetY:(double *)a2 requestInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3 fromParm:(int)a4 atTime:(union { double x0; struct *x1; })a5;
- (BOOL)getHeliumImage:(id *)a0 source:(BOOL)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2 atTime:(union { double x0; struct *x1; })a3;
- (struct PCRect<float> { float x0; float x1; float x2; float x3; })getImageBoundary:(id)a0;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })getInversePixelTransformForImage:(id)a0;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })getPixelTransformForImage:(id)a0;
- (BOOL)getPoint:(void *)a0 fromParm:(unsigned int)a1 atTime:(union { double x0; struct *x1; })a2 withImage:(id)a3;
- (int)getRenderMode:(union { double x0; struct *x1; })a0;
- (struct PCVector2<double> { double x0; double x1; })getScaleForImage:(id)a0;
- (id)initWithAPIManager:(id)a0;
- (void)overrideFrameSetupForRenderMode:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 hardware:(BOOL *)a1 software:(BOOL *)a2;
- (double)relativeShutterForAngle:(double)a0;
- (double)secondsFromFxTime:(union { double x0; struct *x1; })a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })smear:(struct HGRef<HGNode> { struct HGNode *x0; })a0 fromImage:(id)a1 toImage:(id)a2;
- (BOOL)smear:(struct HGRef<HGNode> { struct HGNode *x0; })a0 fromImage:(id)a1 toImage:(id)a2 resultNode:(void *)a3;
- (void)transform:(void *)a0 fromImage:(id)a1 toImage:(id)a2 fit:(BOOL)a3;
- (BOOL)variesOverTime;

@end
