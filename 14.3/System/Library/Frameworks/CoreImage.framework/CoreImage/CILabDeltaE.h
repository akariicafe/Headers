@class CIImage;

@interface CILabDeltaE : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputImage2;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
