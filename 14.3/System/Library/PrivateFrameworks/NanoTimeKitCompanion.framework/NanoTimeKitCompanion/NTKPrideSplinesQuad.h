@class NTKPrideTouchCrownHandler, NTKPromise;
@protocol MTLTexture, MTLBuffer;

@interface NTKPrideSplinesQuad : NTKPrideMetalQuad {
    NTKPrideTouchCrownHandler *_touchCrownHandler;
    BOOL _paused;
    BOOL _forceRenderSticky;
    BOOL _forceRenderOnce;
    BOOL _startWavesAtNextRender;
    BOOL _controlPointsNeedUpdate;
    id<MTLBuffer> _mtlSplinesBuffers[3];
    unsigned short _currentBufferIndex;
    int _mtlSamplePositionBufferWidth;
    NTKPromise *_mtlGeneratedTextures;
    int _mtlComputeBufferWidth;
    id<MTLBuffer> _mtlComputeInputBuffer;
    id<MTLTexture> _mtlComputeInputTexture;
    id<MTLTexture> _mtlComputeOutputTexture;
    void /* unknown type, empty encoding */ _size;
    struct CGSize { double width; double height; } _frameBufferSize;
    BOOL _snapshotting;
}

@property (readonly) NTKPrideTouchCrownHandler *touchCrownHandler;
@property (readonly) id<MTLBuffer> currentSplinesBuffer;
@property (readonly) id<MTLBuffer> currentComputeBuffer;
@property (readonly) int currentComputeBufferWidth;
@property (nonatomic) BOOL enableRecording;
@property (nonatomic) float fadeMultiplier;
@property (nonatomic) float amplitudeMultiplier;

- (void).cxx_destruct;
- (id)snapshot;
- (void)dealloc;
- (void)handleSingleTap:(id)a0;
- (int)numSplines;
- (float)computeAmplitudeForControlPoint:(int)a0 inSpline:(int)a1 atTime:(double)a2;
- (void /* unknown type, empty encoding */)noiseSamplePositionForControlPoint:(int)a0 inSpline:(int)a1;
- (int)numSplinesToDraw;
- (id /* block */)getNTKPrideSplineDefinitionFiller;
- (BOOL)preSemaphoreComputeForTime:(double)a0;
- (id)fragmentShaderName;
- (struct { } *)noiseConfiguration;
- (int)splineDrawOrder:(int)a0;
- (void)renderWithEncoder:(id)a0;
- (id)computeShaderName;
- (void)loadMetalTexturesAndBuffersWithDevice:(id)a0;
- (void)computeWithEncoder:(id)a0 pipelineState:(id)a1;
- (BOOL)postSemaphoreComputeForTime:(double)a0;
- (id)initWithDevice:(id)a0 touchCrownHandler:(id)a1;
- (void)clearWaves;
- (void)setControlPointsNeedUpdate;
- (void)startWavesAtNextRender;
- (float)combinedAmplitudeForControlPointAtPosition:(SEL)a0 currentTime:(float)a1 waveSpeed:(float)a2;
- (BOOL)shouldForceRender;
- (int)numControlPointsPerSpline;
- (int)numVertsForSpline:(int)a0;
- (float)interpolationStepSizeForSpline:(int)a0;
- (float)vignetteAmount;
- (id)generateVignetteTextureData;
- (void)generateControlPointsForSpline:(int)a0;
- (float)globalAmplitudeForTime:(double)a0;
- (void)startWavesAtTime:(double)a0;
- (void)setAmplitude:(float)a0 forControlPoint:(int)a1 ofSpline:(int)a2;
- (float)ampltiudeForControlPoint:(int)a0 ofSpline:(int)a1;
- (void)setNoise:(SEL)a0 forControlPoint:(int)a1 inSpline:(int)a2;
- (BOOL)forceRender;
- (void)setIgnoresStrumAndTap:(BOOL)a0;
- (void)forceRenderOnce;
- (id)snapshotWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)snapshotWithScale:(double)a0;
- (void)strumToOffset:(double)a0 withVelocity:(double)a1;
- (void)setPreviousCrownIndex:(int)a0;
- (int)maxVertsPerSpline;
- (id)_generateInterpolationPositions;
- (void)tapAtPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;

@end
