@class CIImage;

@interface CIDepthDisparityConverter : CIFilter

@property (retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;

@end
