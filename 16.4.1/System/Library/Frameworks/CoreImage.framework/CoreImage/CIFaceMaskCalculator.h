@class CIVector, NSDictionary, CIImage, NSNumber;

@interface CIFaceMaskCalculator : CIFilter

@property (retain) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputFacesLeftEyeX;
@property (retain, nonatomic) CIVector *inputFacesLeftEyeY;
@property (retain, nonatomic) CIVector *inputFacesCenterX;
@property (retain, nonatomic) CIVector *inputFacesCenterY;
@property (retain, nonatomic) CIVector *inputFacesRightEyeX;
@property (retain, nonatomic) CIVector *inputFacesRightEyeY;
@property (retain, nonatomic) CIVector *inputFacesChinX;
@property (retain, nonatomic) CIVector *inputFacesChinY;
@property (copy, nonatomic) NSNumber *inputMaxBlur;
@property (copy, nonatomic) NSNumber *inputFacesCapMultip;
@property (copy, nonatomic) NSNumber *inputFacesMaxBlurOnEyes;
@property (copy, nonatomic) NSNumber *inputFacesMaxBlurDistFromFocus;
@property (copy, nonatomic) NSNumber *inputFacesLinearBlurGrowthM;
@property (copy, nonatomic) NSNumber *inputFacesLinearBlurGrowthC;
@property (copy, nonatomic) NSNumber *inputFacesEyeToEyebrowRatio;
@property (copy, nonatomic) NSNumber *inputFacesDistToBlurScaling;
@property (copy, nonatomic) NSNumber *inputFacesGainMultip;
@property (copy, nonatomic) NSNumber *inputApertureScaling;
@property (retain, nonatomic) NSDictionary *inputTuningParameters;

- (id)outputImage;
- (id)_kernel;
- (id)metalKernel;
- (id)outputImage_V4;

@end
