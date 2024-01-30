@class NSString, GLKTextureInfo, UIView;
@protocol FIUIDeepBreathingPetalRingViewDelegate;

@interface FIUIDeepBreathingPetalRingGLView : HKGLView <FIUIBreathingPetalRingViewDrawable> {
    unsigned int _program;
    void /* unknown type, empty encoding */ _ringCenterVector;
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    struct { union _GLKVector2 { struct { float x; float y; } ; struct { float s; float t; } ; float v[2]; } position; union _GLKVector2 { struct { float x; float y; } ; struct { float s; float t; } ; float v[2]; } coordinate; } _vertices[25];
    unsigned int _indices[72];
    unsigned int _projectionMatrixUniform;
    unsigned int _textureSamplerUniform;
    unsigned int _petalPositionUniform;
    unsigned int _petalPropertiesUniform;
    unsigned int _textureRotationUniform;
    struct { void /* unknown type, empty encoding */ circlePosition[20]; void /* unknown type, empty encoding */ circleProperties[20]; void /* unknown type, empty encoding */ textureRotationVector; } _circleProperties;
    GLKTextureInfo *_texture;
}

@property (weak, nonatomic) id<FIUIDeepBreathingPetalRingViewDelegate> petalRingDelegate;
@property (nonatomic) struct CGPoint { double x; double y; } ringCenter;
@property (nonatomic) float ringRadius;
@property (readonly, nonatomic) long long numberOfPetals;
@property (readonly, nonatomic) long long numberOfVisiblePetals;
@property (readonly, nonatomic) BOOL showBlurTrails;
@property (nonatomic) float preferredFramesPerSecond;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)update;
- (unsigned int)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withContext:(id)a1;
- (void)_context_createBuffers;
- (void)_context_setupScene;
- (void)setPetalAtIndex:(long long)a0 center:(struct CGPoint { double x0; double x1; })a1 radius:(float)a2 alpha:(float)a3;
- (void)setBlurTrailAtIndex:(long long)a0 center:(struct CGPoint { double x0; double x1; })a1 radius:(float)a2 blurriness:(float)a3 alpha:(float)a4;
- (void)setNumberOfVisiblePetals:(long long)a0 showBlurTrails:(BOOL)a1;
- (void)setGradientRotationAngle:(float)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfPetals:(long long)a1 showBlurTrails:(BOOL)a2 device:(id)a3;
- (void)importDataFromPetalRing:(id)a0;
- (void)_context_loadShadersWithNumberOfPetals:(long long)a0 showBlurTrails:(BOOL)a1;
- (void)_context_findUniformsAndAttributes;
- (void)_context_applyInitialState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfPetals:(long long)a1 showBlurTrails:(BOOL)a2;
- (double)_maxPetalRingRadius;
- (void)_updateVertices;
- (void)_setCircleAtIndex:(long long)a0 center:(struct CGPoint { double x0; double x1; })a1 radius:(float)a2 blurriness:(float)a3 alpha:(float)a4;
- (void)_clearCirclesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
