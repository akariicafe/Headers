@class CIImage, NSNumber;

@interface PIBilateralFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputRadius;
@property (retain) NSNumber *inputEdgeDetail;

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;

@end
