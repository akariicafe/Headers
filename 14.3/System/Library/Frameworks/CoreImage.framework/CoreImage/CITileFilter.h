@class CIImage, CIVector, NSNumber;

@interface CITileFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernel_name;
- (id)_kernel_source;
- (id)_croppedCenterPixelImage;

@end
