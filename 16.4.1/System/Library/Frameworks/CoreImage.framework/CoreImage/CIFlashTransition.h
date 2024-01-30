@class CIVector, CIColor, CIImage, NSNumber;

@interface CIFlashTransition : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSNumber *inputTime;
@property (retain, nonatomic) NSNumber *inputMaxStriationRadius;
@property (retain, nonatomic) NSNumber *inputStriationStrength;
@property (retain, nonatomic) NSNumber *inputStriationContrast;
@property (retain, nonatomic) NSNumber *inputFadeThreshold;

+ (id)customAttributes;

- (id)outputImage;
- (id)_colorKernel;
- (id)_geomKernel;

@end
