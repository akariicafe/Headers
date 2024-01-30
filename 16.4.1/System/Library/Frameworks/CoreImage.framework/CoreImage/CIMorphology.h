@class CIImage, NSNumber;

@interface CIMorphology : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;

@end
