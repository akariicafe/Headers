@class CIImage, CIVector;

@interface CICrop : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputRectangle;

+ (id)customAttributes;

- (id)outputImage;
- (id)_outputProperties;
- (id)_initFromProperties:(id)a0;

@end
