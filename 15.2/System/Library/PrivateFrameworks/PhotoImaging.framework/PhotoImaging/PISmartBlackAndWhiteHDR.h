@class CIImage, NSNumber;

@interface PISmartBlackAndWhiteHDR : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputStrength;
@property (copy, nonatomic) NSNumber *inputNeutralGamma;
@property (copy, nonatomic) NSNumber *inputTone;
@property (copy, nonatomic) NSNumber *inputHue;
@property (copy, nonatomic) NSNumber *inputGrain;
@property (copy, nonatomic) NSNumber *inputSeed;
@property (copy, nonatomic) NSNumber *inputScaleFactor;

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (float *)createHueArray;
- (void)getNonNormalizedSettings:(struct { BOOL x0; float x1; float x2; float x3; float x4; float x5[3]; } *)a0;
- (id)hueArrayImage:(float *)a0;
- (id)smartBlackWhiteKernel;

@end
