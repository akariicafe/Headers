@class CIImage;

@interface CISimpleTile : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
