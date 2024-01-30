@class CIImage, CIVector, NSNumber;

@interface CIFusionDelta : CIFilter {
    CIImage *inputImage;
    CIVector *inputAddBlur;
    CIVector *inputRemoveBlur;
    NSNumber *inputApertureScaling;
    NSNumber *inputMaxBlur;
}

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_isIdentity;
- (id)kernel;

@end
