@class CIImage, NSNumber;

@interface CICircularMaskFromPointImage : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputCoordinate;
@property (copy, nonatomic) NSNumber *inputInnerRadius;
@property (copy, nonatomic) NSNumber *inputOuterRadius;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelDraw;

@end
