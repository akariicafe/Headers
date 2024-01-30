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

- (BOOL)_isIdentity;
- (id)kernel;
- (id)outputImage;

@end
