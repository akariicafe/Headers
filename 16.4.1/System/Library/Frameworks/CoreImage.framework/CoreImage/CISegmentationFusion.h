@class CIVector, NSDictionary, CIImage, NSNumber;

@interface CISegmentationFusion : CIFilter {
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIVector *inputAddBlur;
    CIVector *inputRemoveBlur;
    NSNumber *inputApertureScaling;
    NSDictionary *inputTuningParameters;
}

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_isIdentity;
- (id)kernel;

@end
