@interface NTKPrideLinearQuad : NTKPrideSplinesQuad {
    void /* unknown type, empty encoding */ _controlPointsDampingCoefficients[12];
    struct { void /* unknown type, empty encoding */ x0[12]; float x1[12]; void /* unknown type, empty encoding */ x2[12]; id x3; float x4; float x5; float x6; float x7; int x8; int x9; int x10; } *_perSplineData;
    float _aspectRatio;
    float _vignetteAmount;
    float _displayMode;
    float _currentFade;
    BOOL _fading;
    float _globalTouchTime;
    BOOL _paused;
    unsigned long long _currentStyle;
}

@property (readonly, nonatomic) BOOL useXRsRGB;

- (void)dealloc;
- (void)prepareWristRaiseAnimation;
- (void)performWristRaiseAnimation;
- (id)initWithDevice:(id)a0 useXRsRGB:(BOOL)a1 touchCrownHandler:(id)a2;
- (void)setFabricMode;
- (void)applyTransitionFromBandedToFabricWithFraction:(double)a0;
- (int)numSplines;
- (float)computeAmplitudeForControlPoint:(int)a0 inSpline:(int)a1 atTime:(double)a2;
- (void)_generateSplinePositions;
- (void /* unknown type, empty encoding */)noiseSamplePositionForControlPoint:(int)a0 inSpline:(int)a1;
- (void)_initializePerSplineData;
- (id /* block */)getNTKPrideSplineDefinitionFiller;
- (BOOL)preSemaphoreComputeForTime:(double)a0;
- (id)initWithDevice:(id)a0 useXRsRGB:(BOOL)a1;
- (id)renderPipelineManager;
- (id)vertexShaderName;
- (id)renderPipelineName;
- (void)setBandedMode;
- (struct { } *)noiseConfiguration;
- (void)_generateSplineColors;
- (float)_xPositionForSpline:(int)a0;
- (void)handleOrdinaryScreenWake;
- (void)handleScreenOff;
- (void)_computePigeonLocationsForPigeons:(int)a0 inHoles:(int)a1 pigeonIndices:(int **)a2 pigeonToHole:(int **)a3 pigeonsPerHole:(int **)a4;
- (void)_generateControlPointDampingCoefficients;
- (void)clearWaves;
- (BOOL)shouldForceRender;
- (void)processSpline:(int)a0;
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

@end
