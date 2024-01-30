@class CIImage, NSNumber;

@interface CIHistogramDisplayFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputHeight;
@property (retain, nonatomic) NSNumber *inputHighLimit;
@property (retain, nonatomic) NSNumber *inputLowLimit;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
