@interface NTKPrideBetweenLinearQuad : NTKPrideLinearQuad {
    struct { float x0; } *_perSplineData;
    unsigned short _amplitudeIsLarge[12];
    BOOL _someAmplitudesAreLarge;
    BOOL _drawReverseOrder;
}

- (void)dealloc;
- (void)applyTransitionFromBandedToFabricWithFraction:(double)a0;
- (int)numSplines;
- (float)computeAmplitudeForControlPoint:(int)a0 inSpline:(int)a1 atTime:(double)a2;
- (void)_generateSplinePositions;
- (void /* unknown type, empty encoding */)noiseSamplePositionForControlPoint:(int)a0 inSpline:(int)a1;
- (void)_initializePerSplineData;
- (int)numSplinesToDraw;
- (id /* block */)getNTKPrideSplineDefinitionFiller;
- (BOOL)preSemaphoreComputeForTime:(double)a0;
- (id)initWithDevice:(id)a0 useXRsRGB:(BOOL)a1;
- (id)renderPipelineManager;
- (id)vertexShaderName;
- (id)fragmentShaderName;
- (id)renderPipelineName;
- (void)setBandedMode;
- (struct { } *)noiseConfiguration;
- (void)_generateSplineColors;
- (int)splineDrawOrder:(int)a0;
- (float)_xPositionForSpline:(int)a0;
- (BOOL)additiveBlendingEnabled;

@end
