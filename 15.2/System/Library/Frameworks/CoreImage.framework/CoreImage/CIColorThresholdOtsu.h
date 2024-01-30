@class CIImage;

@interface CIColorThresholdOtsu : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;

@end
