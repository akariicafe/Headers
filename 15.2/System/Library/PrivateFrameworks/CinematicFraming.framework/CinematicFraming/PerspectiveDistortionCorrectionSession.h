@interface PerspectiveDistortionCorrectionSession : FrameUndistortionSession {
    float _stereographicFisheyeF;
    float _stereographicFisheyeMaxStrength;
}

- (id)init;
- (struct CGSize { double x0; double x1; })_scaleDisplayRectSizeToFit:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moveDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_pointInFramingSpaceLandscapeLeftIsValid:(SEL)a0 withDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })_searchValidSizeForStartSize:(SEL)a0 invalidPoint:(struct CGSize { double x0; double x1; })a1;
- (void /* unknown type, empty encoding */)_searchEarliestValidPointOnIntervalWithStart:(id)a0 andEnd:(SEL)a1 displayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (float)_fisheyeStrengthForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })_rotationMatrixForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void /* unknown type, empty encoding */)_projectPointInFramingSpaceLandscapeLeft:(SEL)a0 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void /* unknown type, empty encoding */)_outputPlaneSizeForDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_framingSpaceBoundsLandscapeLeft;
- (float)_getHeightDerivativeForWidth:(float)a0 widthDerivative:(float)a1 outputAspectRatioInDeviceOrientation:(float)a2;
- (float)_getHeightForWidth:(float)a0 outputAspectRatioInDeviceOrientation:(float)a1;
- (float)_getWidthForHeight:(float)a0 outputAspectRatioInDeviceOrientation:(float)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_projectRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 calibrationParameters:(struct { float x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x3; })a1;
- (void)_setShaderParametersForRotationNormalizedDisplayRect:(SEL)a0 gidToNormalizedOutput:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 calibrationParameters:(struct { float x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x3; })a2 commandEncoder:(id)a3;

@end
