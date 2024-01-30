@class CIImage, NSNumber;

@interface CIRingBlur : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputPointCount;

+ (id)customAttributes;

- (id)outputImage;

@end
