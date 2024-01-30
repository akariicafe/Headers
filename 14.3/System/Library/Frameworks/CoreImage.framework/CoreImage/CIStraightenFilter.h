@class CIImage, NSNumber;

@interface CIStraightenFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputAngle;

+ (id)customAttributes;

- (id)outputImage;

@end
