@class CIImage, CIVector;

@interface CIReductionFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputExtent;

+ (id)customAttributes;

- (id)outputImage;
- (id)_reduceCrop;
- (id)offsetAndCrop;

@end
