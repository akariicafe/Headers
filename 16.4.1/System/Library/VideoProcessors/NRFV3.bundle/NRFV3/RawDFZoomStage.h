@class RawDFZoomShaders, FigMetalContext;

@interface RawDFZoomStage : NSObject {
    FigMetalContext *_metal;
    RawDFZoomShaders *_shaders;
    BOOL _enableZoom;
}

@property (nonatomic) unsigned short mirrorConfig;

+ (int)prewarmShaders:(id)a0;
+ (void)setOutputMetadata:(id)a0 withFrame:(id)a1;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)applyMirrorWithParams:(id)a0 inputTex:(SEL)a1 inputOffset:(const struct { unsigned long long x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a2 outputTex:(id)a3 outputOffset:(id)a4;
- (int)applyZoomWithParams:(id)a0 inputTex:(SEL)a1 inputOffset:(const struct { unsigned long long x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a2 outputTex:(id)a3 outputOffset:(id)a4;
- (int)processFrame:(id)a0 inputTex:(SEL)a1 inputOrigin:(id)a2 outputTex:(id)a3 outputOrigin:(id)a4;
- (int)processFrame:(id)a0 inputTex:(id)a1 outputTex:(id)a2;
- (int)shouldProcessFrame:(id)a0 result:(BOOL *)a1;
- (int)updatePropertiesForFrame:(id)a0 withZoomParams:(const struct { unsigned long long x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a1;

@end
