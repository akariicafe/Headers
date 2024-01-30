@class CIImage, CIVector, NSNumber;

@interface CIFusionDelta : CIFilter {
    CIImage *inputImage;
    CIVector *inputAddBlur;
    CIVector *inputRemoveBlur;
    NSNumber *inputApertureScaling;
    NSNumber *inputMaxBlur;
}

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)kernel;
- (id)outputImage;

@end
