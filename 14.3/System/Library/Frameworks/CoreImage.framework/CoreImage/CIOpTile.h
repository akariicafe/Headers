@class CIImage, CIVector, NSNumber;

@interface CIOpTile : CIFilter {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputScale;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIOpTile;

@end
