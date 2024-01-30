@class CIImage, NSNumber;

@interface CIColorThreshold : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputThreshold;

+ (id)customAttributes;

- (id)outputImage;

@end
