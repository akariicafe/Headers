@class ASVQuaternionSpring, ASVStateSpring, NSString, ASVAnimTime, CALayer, ASVGlyphState, ASVBasicSpring, ASVSpringDouble3, ASVMetalSplineData, ASVDotsRenderer, ASVDeviceController;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState, MTLRenderPipelineState;

@interface ASVGlyphRenderer : NSObject <ASVGlyphStateDelegate> {
    id<MTLDevice> _device;
    unsigned long long _pixelFormat;
    id<MTLLibrary> _defaultLibrary;
    id<MTLComputePipelineState> _computePipelineState;
    id<MTLRenderPipelineState> _postTessellationPipelineState;
    id<MTLTexture> _msaaTex;
    int _sampleCount;
    CALayer *_layer;
    float _edgeFactor;
    float _insideFactor;
    ASVGlyphState *_state;
    float _strokeWeight;
    ASVAnimTime *_time;
    ASVQuaternionSpring *_rotationSpring;
    ASVSpringDouble3 *_scaleSpring;
    ASVSpringDouble3 *_translationSpring;
    ASVStateSpring *_cubeResolveSpring;
    ASVStateSpring *_planeResolveSpring;
    ASVStateSpring *_alphaSpring;
    ASVBasicSpring *_orientationSpring;
    struct { void /* unknown type, empty encoding */ vector; } _rotation;
    struct { double angle; void /* unknown type, empty encoding */ axis; } _angularVelocity;
    struct { void /* unknown type, empty encoding */ columns[4]; } _R;
    struct { void /* unknown type, empty encoding */ columns[4]; } _MVP;
    struct { void /* unknown type, empty encoding */ columns[4]; } _mvp_ortho;
    struct { void /* unknown type, empty encoding */ columns[4]; } _mvp_persp;
    ASVMetalSplineData *_splineData;
    ASVDotsRenderer *_dotsRenderer;
    ASVDeviceController *_deviceController;
    struct CGSize { double width; double height; } _lastDrawableSize;
    BOOL _dirty_tesselation_factors;
}

@property (readonly, nonatomic) ASVGlyphState *state;
@property (nonatomic) float rotationAngleY;
@property (nonatomic) float a_vel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resetData;
- (void)setOrientationAngle:(float)a0;
- (id)initWithLayer:(id)a0 device:(id)a1 pixelFormat:(unsigned long long)a2 sampleCount:(int)a3 deviceMaskImage:(id)a4;
- (void)resizeIfNeeded:(id)a0;
- (void)drawWithTimeDelta:(double)a0 drawable:(id)a1 commandBuffer:(id)a2;
- (void)snapStateChanged;
- (void)quaternionTargetChanged;
- (void)scaleTargetChanged;
- (void)stepSprings:(double)a0;
- (void)updateAngularVelocity;
- (void)computeRotation:(double)a0;
- (void)computeTesselationFactorsForCommandBuffer:(id)a0;
- (void)renderPostTessellationInDrawable:(id)a0 withCommandBuffer:(id)a1;
- (void)generateTexturesWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)translationTargetChanged;

@end
