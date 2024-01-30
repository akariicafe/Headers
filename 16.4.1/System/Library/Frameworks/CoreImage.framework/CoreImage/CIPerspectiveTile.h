@class CIImage, CIVector;

@interface CIPerspectiveTile : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputTopLeft;
@property (retain, nonatomic) CIVector *inputTopRight;
@property (retain, nonatomic) CIVector *inputBottomRight;
@property (retain, nonatomic) CIVector *inputBottomLeft;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
