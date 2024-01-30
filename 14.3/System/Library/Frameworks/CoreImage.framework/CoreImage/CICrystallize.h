@class CIImage, NSNumber, CIVector;

@interface CICrystallize : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
    CIVector *inputCenter;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CICrystallize;

@end
