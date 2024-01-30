@interface PerspectiveDistortionCorrectionSession : FrameUndistortionSession {
    struct { void /* unknown type, empty encoding */ columns[3]; } _rotationMatrix;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _outputPlaneRect;
    float _stereographicFisheyeF;
    float _stereographicFisheyeMaxStrength;
    float _fisheyeStrength;
    float _pitch;
    float _pitchRefinement;
    BOOL _pitchInGimbalLockRange;
    float _roll;
    BOOL _constrainRollUpdate;
    struct { BOOL enabled; float coefficients[256]; } _toneMappingControls;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_outputPlaneRectForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)_fisheyeStrengthForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void /* unknown type, empty encoding */)_outputPlaneSizeForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_constrainedRollUpdate:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_framingSpaceBoundsLandscapeLeft;
- (float)_getHeightDerivativeForWidth:(float)a0 widthDerivative:(float)a1 outputAspectRatioInDeviceOrientation:(float)a2;
- (float)_getHeightForWidth:(float)a0 outputAspectRatioInDeviceOrientation:(float)a1;
- (float)_getWidthForHeight:(float)a0 outputAspectRatioInDeviceOrientation:(float)a1;
- (BOOL)_gravityVectorIsValid;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moveDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)_outputPlaneCcwRotations;
- (BOOL)_pointInFramingSpaceLandscapeLeftIsValid:(SEL)a0;
- (BOOL)_pointInFramingSpaceLandscapeLeftIsValid:(SEL)a0 withDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void /* unknown type, empty encoding */)_projectPointInFramingSpaceLandscapeLeft:(SEL)a0 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_projectRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct { void /* unknown type, empty encoding */ x0[3]; })_rotationMatrixForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_scaleDisplayRectSizeToFit:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scalePlaneToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void /* unknown type, empty encoding */)_searchEarliestValidPointOnIntervalWithStart:(id)a0 andEnd:(SEL)a1 displayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGSize { double x0; double x1; })_searchValidSizeForStartSize:(SEL)a0 invalidPoint:(struct CGSize { double x0; double x1; })a1;
- (void)_setShaderParametersForRotationNormalizedDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outputROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 calibrationParameters:(struct { float x0; int x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x3; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x4; })a2 commandEncoder:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shiftOutputPlaneToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updatePitchAndRoll;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 calibrationParameters:(struct { float x0; int x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x3; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x4; })a1;
- (struct { struct { } x0; })backProjectedFramingSpaceViewport;
- (unsigned int)cameraOrientationToExifOrientation:(int)a0;
- (BOOL)imageTransformIsValid;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 mode:(int)a1 portType:(id)a2;
- (struct { void /* unknown type, empty encoding */ x0[3]; })normalizedFramingSpaceLandscapeLeftToInputImageTransformMatrix;
- (void /* unknown type, empty encoding */)projectPointToFramingSpaceLandscapeLeft:(SEL)a0;
- (void /* unknown type, empty encoding */)projectPointToInputImageCoordinates:(SEL)a0;
- (struct { struct { } x0; })projectRectInFramingSpaceLandscapeLeftToInputImageCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct { struct { } x0; })projectRectInInputImageToFramingSpaceLandscapeLeftCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
