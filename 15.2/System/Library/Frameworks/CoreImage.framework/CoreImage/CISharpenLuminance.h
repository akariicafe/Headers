@class CIImage, NSNumber;

@interface CISharpenLuminance : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSharpness;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_isIdentity;
- (id)_kernel;

@end
