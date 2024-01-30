@class CIImage, NSNumber;

@interface WhiteboardFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *stride;

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (id)whiteboardFilterKernel;

@end
