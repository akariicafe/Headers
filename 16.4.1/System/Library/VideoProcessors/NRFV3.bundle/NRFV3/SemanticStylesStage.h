@class GuidedFilter, FigMetalContext, SemanticStylesPlist, MTLSharedEventListener, SemanticStylesShaders;
@protocol MTLTexture, MTLBuffer, MTLSharedEvent;

@interface SemanticStylesStage : NSObject {
    FigMetalContext *_metalContext;
    SemanticStylesShaders *_shaders;
    GuidedFilter *_guidedFilter;
    id<MTLBuffer> _paramsBuf;
    id<MTLBuffer> _statsBuf;
    id<MTLTexture> _guideTex;
    id<MTLTexture> _lightMapSmallTex;
    id<MTLTexture> _lightMapTex;
    id<MTLTexture> _fgbgMatteTex;
    id<MTLTexture> _skinMatteTex;
    id<MTLTexture> _skyMatteTex;
    id<MTLSharedEvent> _sharedEvent;
    MTLSharedEventListener *_sharedEventListener;
    SemanticStylesPlist *_tuningParams;
}

+ (int)prewarmShaders:(id)a0;

- (void)releaseResources;
- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)calculateAdjustmentParametersWithParamsBuffer:(id)a0 statsBuffer:(id)a1;
- (int)calculateHistogramStatsWithLumaTex:(id)a0 chromaTex:(id)a1;
- (int)createGuideImage:(id)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 label:(id)a2;
- (id)newTexture2DWithFormat:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 usage:(unsigned long long)a3 label:(id)a4;
- (int)processPersonMaskTex:(id)a0 skinMaskTex:(id)a1 skyMaskTex:(id)a2;
- (void)remapSliderValueForRendering;
- (int)renderWithLumaTex:(id)a0 chromaTex:(id)a1 gainMapTex:(id)a2 outputGainMapTex:(id)a3;
- (int)runWithStyle:(id)a0 tuningParams:(id)a1 refFrameMetadata:(const struct frameMetadata { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; long long x5; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; int x27; float x28; } x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; int x8; BOOL x9; struct ltmCurves { union { unsigned short x0; char x1[18242]; char x2[110616]; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x3; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x4; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13[0]; } x5; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12[0]; } x6; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; short x11; struct { struct { short x0; short x1; short x2; } x0; struct { short x0; short x1; short x2; } x1; struct { short x0; short x1; short x2; } x2; struct { short x0; short x1; short x2; } x3; struct { short x0; short x1; short x2; } x4; struct { short x0; short x1; short x2; } x5; struct { short x0; short x1; short x2; } x6; struct { short x0; short x1; short x2; } x7; struct { short x0; short x1; short x2; } x8; } x12[0]; } x7; } x0; union { unsigned short x0; char x1[18242]; char x2[110616]; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x3; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11[0]; } x4; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13[0]; } x5; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12[0]; } x6; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; short x11; struct { struct { short x0; short x1; short x2; } x0; struct { short x0; short x1; short x2; } x1; struct { short x0; short x1; short x2; } x2; struct { short x0; short x1; short x2; } x3; struct { short x0; short x1; short x2; } x4; struct { short x0; short x1; short x2; } x5; struct { short x0; short x1; short x2; } x6; struct { short x0; short x1; short x2; } x7; struct { short x0; short x1; short x2; } x8; } x12[0]; } x7; } x1; struct { unsigned short x0; unsigned short x1[0]; } x2; unsigned short x3[257]; struct { unsigned short x0; unsigned short x1[0]; } x4; unsigned short x5[257]; float x6; float x7[65]; BOOL x8; } x10; struct { void /* unknown type, empty encoding */ x0[3]; } x11; BOOL x12; BOOL x13; int x14; struct FaceDetectionBuffer { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; unsigned short x2; unsigned short x3; } x15[10]; int x16; struct BodyDetectionBuffer { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; } x17[10]; BOOL x18; struct LocalHistogramClippingDataGeneric { unsigned short x0; unsigned int x1; struct *x2; } x19; float x20; BOOL x21; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x22; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x23; BOOL x24; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x25; } *)a2 sceneType:(id)a3 lumaTex:(id)a4 chromaTex:(id)a5 gainMapTex:(id)a6 outputGainMapTex:(id)a7 personMaskTex:(id)a8 skinMaskTex:(id)a9 skyMaskTex:(id)a10 isLowLight:(BOOL)a11;
- (int)upsampleLightMap;

@end
