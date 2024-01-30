@class CIImage, NSNumber;

@interface CIEdges : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIEdges;

@end
