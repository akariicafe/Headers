@class CIImage;

@interface _CICompositeFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputBackgroundImage;

+ (id)customAttributes;
+ (id)_kernel;

- (id)outputImage;

@end
