@class CIVector, NSDictionary, AVCameraCalibrationData, CIImage, NSNumber;

@interface CIDepthEffectMakeBlurMap : CIFilter {
    NSDictionary *tuningParameters;
    float simulatedAperture;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputShiftmapImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) CIImage *inputHairImage;
@property (retain) CIImage *inputGlassesImage;
@property (retain) CIImage *inputGainMap;
@property (copy, nonatomic) NSNumber *inputAperture;
@property (retain) CIVector *inputLeftEyePosition;
@property (retain) CIVector *inputRightEyePosition;
@property (retain) CIVector *inputChinPosition;
@property (retain) CIVector *inputFaceMidPoint;
@property (retain, nonatomic) CIVector *inputFocusRect;
@property (copy, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) AVCameraCalibrationData *inputCalibrationData;
@property (retain, nonatomic) id inputAuxDataMetadata;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)blurMapV2:(id)a0;
- (id)calibrationData;
- (struct CGSize { double x0; double x1; })originalShiftMapSize;
- (float)intrinsicMatrixFocalLength;
- (id)upsampledShiftMap:(id)a0;
- (id)smoothShiftMapV2:(id)a0;
- (id)lensModelParams:(id)a0;
- (id)lensModelApply:(id)a0 shiftMap:(id)a1;
- (BOOL)needToRunFaceMask;
- (id)faceMaskParams:(id)a0 useNormalizedCoords:(BOOL)a1;
- (id)faceMaskApply:(id)a0 blurMap:(id)a1;
- (id)faceMaskDelta:(id)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parameters:(id)a2 distanceToAdd:(float *)a3;
- (id)refineShiftMapV3WithMainImage:(id)a0 shiftmap:(id)a1 lensModel:(id)a2;
- (id)unifiedRenderingOutputImage:(struct CGImageMetadata { } *)a0;
- (id)blurMapV3:(id)a0 shiftmap:(id)a1 alphaImage:(id)a2;
- (id)blurMapV4:(id)a0 shiftmap:(id)a1 alphaImage:(id)a2 hairImage:(id)a3;
- (id)outputImage;

@end
