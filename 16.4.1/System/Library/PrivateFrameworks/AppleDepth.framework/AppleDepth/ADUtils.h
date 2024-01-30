@interface ADUtils : NSObject

+ (id)prioritizationAsString:(long long)a0;
+ (BOOL)updatePixelBufferAllocationWithNewSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned int)a1 pixelBuffer:(struct __CVBuffer **)a2;
+ (long long)ADReturnFromOSStatus:(int)a0;
+ (struct { void /* unknown type, empty encoding */ x0[3]; })addAnglesToRotation:(SEL)a0 angles:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;
+ (void /* unknown type, empty encoding */)calcRotationAngle:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0;
+ (struct { void /* unknown type, empty encoding */ x0[3]; })calcRotationMatrix:(SEL)a0;
+ (void)convertRGBAFloat:(struct __CVBuffer { } *)a0 toPlanar:(struct __CVBuffer { } *)a1;
+ (long long)convertToLevelsConfidence:(struct __CVBuffer { } *)a0 confidenceOutput:(struct __CVBuffer { } *)a1 confidenceLowThreshold:(float)a2 confidenceHighThreshold:(float)a3 inverseThresholds:(BOOL)a4;
+ (long long)copyModifyNormalsPixelBuffer:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1 normalsRotation:(long long)a2;
+ (long long)filterInvalidsFromFloatImage:(struct __CVBuffer { } *)a0 minValue:(float)a1 maxValue:(float)a2;
+ (long long)filterInvalidsFromFloatImage:(struct __CVBuffer { } *)a0 minValue:(float)a1 maxValue:(float)a2 clampToMinMax:(BOOL)a3;
+ (long long)fuseCurrentDepth:(struct __CVBuffer { } *)a0 previousDepth:(struct __CVBuffer { } *)a1 intoOutputDepth:(struct __CVBuffer { } *)a2 currentConfidence:(struct __CVBuffer { } *)a3 previousConfidence:(struct __CVBuffer { } *)a4 intoOutputConfidence:(struct __CVBuffer { } *)a5 currentNormals:(struct __CVBuffer { } *)a6 previousNormals:(struct __CVBuffer { } *)a7 intoOutputNormals:(struct __CVBuffer { } *)a8 usingAlpha:(struct __CVBuffer { } *)a9 defaultAlpha:(float)a10 confidenceUnits:(unsigned long long)a11;
+ (long long)fuseCurrentDepthAndConfidenceMaps:(struct __CVBuffer { } *)a0 previousDepth:(struct __CVBuffer { } *)a1 currentConfidence:(struct __CVBuffer { } *)a2 previousConfidence:(struct __CVBuffer { } *)a3 outputDepth:(struct __CVBuffer { } *)a4 outputConfidence:(struct __CVBuffer { } *)a5 defaultAlpha:(float)a6 depthMaxDiff:(float)a7;
+ (long long)fuseCurrentMap:(struct __CVBuffer { } *)a0 previousMap:(struct __CVBuffer { } *)a1 intoOutputMap:(struct __CVBuffer { } *)a2 usingAlpha:(struct __CVBuffer { } *)a3 defaultAlpha:(float)a4 diffThreshold:(float)a5;
+ (id)getStandardNameForBufferOfType:(id)a0 moduleName:(id)a1;
+ (long long)postProcessConfidence:(struct __CVBuffer { } *)a0 confidenceOutput:(struct __CVBuffer { } *)a1 rawConfidenceUnits:(unsigned long long)a2 outConfidenceUnits:(unsigned long long)a3 confidenceLowThreshold:(float)a4 confidenceHighThreshold:(float)a5;
+ (long long)postProcessDepth:(struct __CVBuffer { } *)a0 depthOutput:(struct __CVBuffer { } *)a1;
+ (long long)postProcessDepth:(struct __CVBuffer { } *)a0 depthOutput:(struct __CVBuffer { } *)a1 inputRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (long long)postProcessNormals:(struct __CVBuffer { } *)a0 normalsOutput:(struct __CVBuffer { } *)a1 normalsRotation:(long long)a2;
+ (long long)postProcessWithDepth:(struct __CVBuffer { } *)a0 confidence:(struct __CVBuffer { } *)a1 normals:(struct __CVBuffer { } *)a2 depthOutput:(struct __CVBuffer { } *)a3 confidenceOutput:(struct __CVBuffer { } *)a4 normalsOutput:(struct __CVBuffer { } *)a5 normalsRotation:(long long)a6 rawConfidenceUnits:(unsigned long long)a7 outConfidenceUnits:(unsigned long long)a8 confidenceLowThreshold:(float)a9 confidenceHighThreshold:(float)a10;
+ (long long)scaleConvertRotateImage:(struct __CVBuffer { } *)a0 rotateBy:(unsigned char)a1 cropBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scaleInto:(struct __CVBuffer { } *)a3 intermediateScalingBuffer:(struct __CVBuffer **)a4 intermediateRotatingBuffer:(struct __CVBuffer **)a5;
+ (long long)scaleConvertRotateImage:(struct __CVBuffer { } *)a0 rotateBy:(unsigned char)a1 cropBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scaleInto:(struct __CVBuffer { } *)a3 intermediateScalingBuffer:(struct __CVBuffer **)a4 intermediateRotatingBuffer:(struct __CVBuffer **)a5 useVT:(BOOL)a6;
+ (id)undistortedCalibrationWithSameFOV:(id)a0;
+ (void)updatePixelBufferIOSurfaceLabel:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1;
+ (long long)warpAndFuseWithCurrDepth:(struct __CVBuffer { } *)a0 prevDepth:(struct __CVBuffer { } *)a1 currNormals:(struct __CVBuffer { } *)a2 prevNormals:(struct __CVBuffer { } *)a3 opticalFlow:(struct __CVBuffer { } *)a4 alphaMap:(struct __CVBuffer { } *)a5 defaultAlpha:(float)a6 depthOutput:(struct __CVBuffer { } *)a7 normalsOutput:(struct __CVBuffer { } *)a8;
+ (long long)warpMap:(struct __CVBuffer { } *)a0 toOutput:(struct __CVBuffer { } *)a1 usingOpticalFlow:(struct __CVBuffer { } *)a2;
+ (long long)warpPreviousDepth:(struct __CVBuffer { } *)a0 intoCurrentDepth:(struct __CVBuffer { } *)a1 previousConfidence:(struct __CVBuffer { } *)a2 intoCurrentConfidence:(struct __CVBuffer { } *)a3 previousNormals:(struct __CVBuffer { } *)a4 intoCurrentNormals:(struct __CVBuffer { } *)a5 usingOpticalFlow:(struct __CVBuffer { } *)a6;

@end
