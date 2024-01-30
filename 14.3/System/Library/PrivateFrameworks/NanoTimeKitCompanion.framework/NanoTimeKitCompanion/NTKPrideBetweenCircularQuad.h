@interface NTKPrideBetweenCircularQuad : NTKPrideCircularQuad

- (float)softness;
- (float)computeAmplitudeForControlPoint:(int)a0 inSpline:(int)a1 atTime:(double)a2;
- (void /* unknown type, empty encoding */)noiseSamplePositionForControlPoint:(int)a0 inSpline:(int)a1;
- (int)numSplinesToDraw;
- (id)renderPipelineManager;
- (id)vertexShaderName;
- (id)fragmentShaderName;
- (id)renderPipelineName;
- (int)splineDrawOrder:(int)a0;
- (BOOL)additiveBlendingEnabled;
- (id)splineColorAtIndex:(int)a0;
- (float)_dialRadiusForSpline:(int)a0;
- (float)_rectRadiusForSpline:(int)a0;
- (float)_dampingFactorForSpline:(int)a0;
- (int)_numVertsForSpline:(int)a0;
- (void)_colorSequenceForStartIndex:(int)a0 reverseDirection:(BOOL)a1 colorSequence:(id /* block */)a2;

@end
