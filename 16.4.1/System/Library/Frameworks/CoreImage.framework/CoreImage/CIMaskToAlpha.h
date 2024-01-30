@class CIImage;

@interface CIMaskToAlpha : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
