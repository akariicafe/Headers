@class CIImage, NSNumber, CIVector;

@interface CIModifyBlurmap : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputPersonAlpha;
@property (retain) CIImage *inputHairAlpha;
@property (retain) CIImage *inputFaceMaskDeltaImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSNumber *inputDistanceAdd;
@property (retain) NSNumber *inputApertureScaling;
@property (retain) NSNumber *inputRelativeApertureScalingStrength;
@property (retain) NSNumber *inputSmoothstepMin;
@property (retain) NSNumber *inputSmoothstepMax;
@property (retain) NSNumber *inputMaxBlur;
@property (retain) NSNumber *inputPersonDistance;
@property (retain) NSNumber *inputPersonThreshold;
@property (retain) CIVector *inputPersonAdditive;
@property (retain) CIVector *inputPersonSubtractive;
@property (retain) NSNumber *inputPersonMaxBlur;
@property (retain) NSNumber *inputHairDistance;
@property (retain) NSNumber *inputHairThreshold;
@property (retain) CIVector *inputHairAdditive;
@property (retain) CIVector *inputHairSubtractive;
@property (retain) NSNumber *inputHairMaxBlur;
@property (retain) NSNumber *inputProtectBodyStrength;
@property (retain) CIVector *inputLeftEyeX;
@property (retain) CIVector *inputLeftEyeY;
@property (retain) CIVector *inputRightEyeX;
@property (retain) CIVector *inputRightEyeY;
@property (retain) CIVector *inputFaceMidPointX;
@property (retain) CIVector *inputFaceMidPointY;
@property (retain) NSNumber *inputEyeProtectionMaxFaces;
@property (retain) NSNumber *inputEyeProtectionFaceWeightsSmoothStepMin;
@property (retain) NSNumber *inputEyeProtectionFaceWeightsSmoothStepMax;
@property (retain) NSNumber *inputEyeProtectionOvalDimsDistanceScale;
@property (retain) NSNumber *inputEyeProtectionOvalDimsDistanceOffset;
@property (retain) NSNumber *inputEyeProtectionOvalDimsRadiusHorizontal;
@property (retain) NSNumber *inputEyeProtectionOvalDimsRadiusVertical;
@property (retain) NSNumber *inputEyeProtectionOvalFallOffSmoothStepMin;
@property (retain) NSNumber *inputEyeProtectionOvalFallOffSmoothStepMax;
@property (retain) NSNumber *inputEyeProtectionPersonMaskSmoothStepMin;
@property (retain) NSNumber *inputEyeProtectionPersonMaskSmoothStepMax;
@property (retain) NSNumber *inputEyeProtectionPreventStrength;
@property (retain) NSNumber *inputEyeProtectionSubtractiveMaxBlur;
@property (retain) NSNumber *inputEyeProtectionSubtractiveApertureScaling;

+ (id)customAttributes;

- (id)outputImage;

@end
