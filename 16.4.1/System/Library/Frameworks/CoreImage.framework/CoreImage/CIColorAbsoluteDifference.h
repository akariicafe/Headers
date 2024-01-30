@class CIImage;

@interface CIColorAbsoluteDifference : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputImage2;

+ (id)customAttributes;

- (id)outputImage;

@end
