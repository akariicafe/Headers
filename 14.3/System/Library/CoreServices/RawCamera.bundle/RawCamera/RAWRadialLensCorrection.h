@class CIImage, CIVector, NSNumber;

@interface RAWRadialLensCorrection : RAWFilter {
    CIImage *inputImage;
    CIVector *inputScales;
    id inputColorSpace;
    NSNumber *inputDraftMode;
    NSNumber *inputLDCExecuteFlags;
    NSNumber *inputVersion;
    CIImage *mapImg;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;
- (BOOL)makeMapImages;

@end
