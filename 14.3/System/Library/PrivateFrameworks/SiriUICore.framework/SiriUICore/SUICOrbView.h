@class MTLRenderPassDescriptor, CAMetalLayer, NSTimer, CADisplayLink, MPSImageGaussianBlur;
@protocol MTLRenderPipelineState, MTLDevice, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface SUICOrbView : UIView {
    CAMetalLayer *_metalLayer;
    CADisplayLink *_displayLink;
    id /* block */ _offCompletion;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLBuffer> _dynamicUniformBuffer;
    id<MTLRenderPipelineState> _siriChipBackfacePipeline;
    id<MTLRenderPipelineState> _siriChipFrontfacePipeline;
    id<MTLRenderPipelineState> _siriShadowPipeline;
    id<MTLRenderPipelineState> _siriCompositePipeline;
    id<MTLRenderPipelineState> _sphereMaskPipeline;
    id<MTLRenderPipelineState> _siriAddBlitPipeline;
    id<MTLTexture> _siriChipsTexture;
    id<MTLTexture> _sphereMaskTexture;
    id<MTLTexture> _siriChipsTextureMSAA;
    id<MTLTexture> _sphereMaskTextureMSAA;
    id<MTLTexture> _compositeTextureMSAA;
    id<MTLTexture> _blurChipsTexture;
    id<MTLTexture> _blurMaskTexture;
    id<MTLTexture> _smoothStepTexture;
    id<MTLTexture> _noiseTexture;
    MTLRenderPassDescriptor *_siriChipRenderPassDesc;
    MTLRenderPassDescriptor *_sphereMaskRenderPassDesc;
    MTLRenderPassDescriptor *_finalRenderPassDesc;
    MPSImageGaussianBlur *_mpsBlur;
    struct { long long x; long long y; long long z; } _mpsChipBlurOffset;
    id<MTLBuffer> _siriChipGeom;
    int _chipNumIndexes;
    int _chipIndexBufferOffset;
    id<MTLBuffer> _sphereGeom;
    int _sphereNumIndexes;
    int _sphereIndexBufferOffet;
    void *_uniformBufferAddress;
    struct { void /* unknown type, empty encoding */ columns[4]; } _projectionMatrix;
    struct { struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; void /* unknown type, empty encoding */ offsets; float sphereScale; } _sphereUniforms;
    struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _bubbleSpring;
    struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _energySpring;
    struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _volumeSpring;
    struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _chipsSpring;
    struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _specularSpring;
    struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _thinkingSpring;
    struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _speakingSpring;
    struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _glowSpring;
    struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _onSpring;
    struct { float value; float curVelocity; float maxAcceleration; float springAmount; } _chipSpring[6];
    void /* unknown type, empty encoding */ _setupRasterSize;
    float _bubbleDrawnSize;
    float _averageChipSize;
    float _maxChipSize;
    float _chipRotation;
    float _chipRandomOffset[18];
    float _time;
    float _thinkRotation;
    float _framerateEnergyModifier;
    float _thinkingTimeStart;
    BOOL _startingThinkingModeNow;
    BOOL _drawingVeryLastFrame;
    BOOL _resetOnNextFrame;
    BOOL _reduceMotion;
    float _powerLevel;
    unsigned long long _framerateType;
    int _framesPerSecond;
}

@property (nonatomic) int currentlyShownChannel;
@property (nonatomic) int numberOfChips;
@property (nonatomic) float bias;
@property (nonatomic) float scale;
@property (nonatomic) float power;
@property (retain, nonatomic) NSTimer *invalidateTimer;
@property (nonatomic) long long mode;

+ (Class)layerClass;

- (void)_setMode:(long long)a0;
- (id)_from:(id)a0 getRenderPipeline:(id)a1 err:(id *)a2;
- (void).cxx_destruct;
- (void)setPowerLevel:(float)a0;
- (void)_invalidateDisplayLink;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_loadAssets;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;
- (void)_setupSpring:(struct { float x0; float x1; float x2; float x3; } *)a0 withType:(unsigned long long)a1 initialValue:(float)a2;
- (void)_initCommandQueue;
- (void)_loadMetalPipelines;
- (void)_loadMetalState;
- (void)_updateMetalTextureRasterSize:(struct CGSize { double x0; double x1; })a0;
- (void)_drawSiriFrame:(id)a0;
- (void)_initSprings;
- (void)_initNoiseOffsets;
- (void)_didSetModeFrom:(long long)a0 to:(long long)a1;
- (void)_createSphereBuffer;
- (void)_createSiriChipBuffer;
- (void)_createSmoothStepTexture;
- (void)_createNoiseTexture;
- (void)_updateChipsSizesForOnOff;
- (void)_updateDynamicBufferState;
- (void)_updateSiriGraphicsState;
- (void)pauseAnimationAndReset;
- (void)animateToOffWithCompletion:(id /* block */)a0;
- (void)prewarmOrb;
- (id)_from:(id)a0 getComputePipeline:(id)a1 err:(id *)a2;
- (float)linearPowerLevel;

@end
