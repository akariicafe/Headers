@class ARCoachingDotsRenderer, NSString, ARCoachingSpringDouble3, ARCoachingStateSpring, CALayer, ARCoachingBasicSpring, ARCoachingMetalSplineData, ARCoachingQuaternionSpring, ARCoachingDeviceController, NSObject, ARCoachingGlyphState, ARCoachingAnimTime;
@protocol OS_dispatch_queue, MTLDevice, MTLTexture, MTLComputePipelineState, MTLRenderPipelineState;

@interface ARCoachingGlyphRenderer : NSObject <ARCoachingGlyphStateDelegate> {
    id<MTLDevice> _device;
    unsigned long long _pixelFormat;
    id<MTLTexture> _msaaTex;
    int _sampleCount;
    CALayer *_layer;
    float _edgeFactor;
    float _insideFactor;
    ARCoachingGlyphState *_state;
    float _strokeWeight;
    ARCoachingAnimTime *_time;
    ARCoachingQuaternionSpring *_rotationSpring;
    ARCoachingSpringDouble3 *_scaleSpring;
    ARCoachingSpringDouble3 *_topPlaneTranslationSpring;
    ARCoachingSpringDouble3 *_bottomPlaneTranslationSpring;
    ARCoachingStateSpring *_cubeResolveSpring;
    ARCoachingStateSpring *_planeResolveSpring;
    ARCoachingStateSpring *_verticalResolvingSpring;
    ARCoachingStateSpring *_alphaSpring;
    ARCoachingBasicSpring *_orientationSpring;
    struct { void /* unknown type, empty encoding */ vector; } _rotation;
    struct { double angle; void /* unknown type, empty encoding */ axis; } _angularVelocity;
    struct { void /* unknown type, empty encoding */ columns[4]; } _R;
    struct { void /* unknown type, empty encoding */ columns[4]; } _MVP;
    struct { void /* unknown type, empty encoding */ columns[4]; } _mvp_ortho;
    struct { void /* unknown type, empty encoding */ columns[4]; } _mvp_persp;
    ARCoachingMetalSplineData *_splineData;
    ARCoachingDeviceController *_deviceController;
    ARCoachingDeviceController *_parallaxDeviceController;
    struct CGSize { double width; double height; } _lastDrawableSize;
    BOOL _dirty_tesselation_factors;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) ARCoachingDotsRenderer *dotsRenderer;
@property (retain, nonatomic) id<MTLComputePipelineState> computePipelineState;
@property (retain, nonatomic) id<MTLRenderPipelineState> postTessellationPipelineState;
@property (readonly, nonatomic) double currentAnimationTime;
@property (readonly, nonatomic) ARCoachingGlyphState *state;
@property (nonatomic) float rotationAngleY;
@property (nonatomic) float a_vel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (void)resetData;
- (void)setOrientationAngle:(float)a0;
- (id)initWithLayer:(id)a0 device:(id)a1 pixelFormat:(unsigned long long)a2 sampleCount:(int)a3 deviceMaskImage:(id)a4;
- (void)resetAnimationTime:(double)a0;
- (void)resizeIfNeeded:(id)a0;
- (void)drawWithTimeDelta:(double)a0 drawable:(id)a1 commandBuffer:(id)a2;
- (void)snapStateChanged;
- (void)quaternionTargetChanged;
- (void)scaleTargetChanged;
- (void)topPlaneTranslationTargetChanged;
- (void)bottomPlaneTranslationTargetChanged;
- (void)stepSprings:(double)a0;
- (void)updateAngularVelocity;
- (void)computeRotation:(double)a0;
- (void)computeTesselationFactorsForCommandBuffer:(id)a0;
- (void)renderPostTessellationInDrawable:(id)a0 withCommandBuffer:(id)a1;
- (void)generateTexturesWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)resetSprings;
- (void)restartAnimation;

@end
