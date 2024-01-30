@class CIImage;

@interface CILinearToSRGBToneCurve : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;

@end
