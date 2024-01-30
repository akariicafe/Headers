@class CIImage, CIVector, NSNumber;

@interface CITriangleTile : CIFilter {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}

+ (id)customAttributes;

- (id)_CITriangleTile;
- (id)outputImage;

@end
