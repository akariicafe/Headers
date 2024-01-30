@class CIImage, NSNumber, CIVector;

@interface CICrystallize : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) CIVector *inputCenter;

+ (id)customAttributes;

- (id)_CICrystallize;
- (id)outputImage;

@end
