@class CIImage, CIVector, NSNumber;

@interface CIHexagonalPixellate : CIFilter {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)_CIHexagonalPixellate;
- (id)outputImage;

@end
