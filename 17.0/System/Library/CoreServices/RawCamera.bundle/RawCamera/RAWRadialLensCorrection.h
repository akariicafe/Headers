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

- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)outputImage;
- (BOOL)makeMapImages;

@end
