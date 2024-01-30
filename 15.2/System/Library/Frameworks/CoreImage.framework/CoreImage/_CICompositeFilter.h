@class CIImage;

@interface _CICompositeFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputBackgroundImage;

+ (id)_kernel;
+ (id)customAttributes;

- (id)outputImage;

@end
