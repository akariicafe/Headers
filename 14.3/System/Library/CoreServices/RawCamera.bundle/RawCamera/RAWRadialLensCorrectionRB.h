@class CIImage, CIVector, NSNumber;

@interface RAWRadialLensCorrectionRB : RAWFilter {
    CIImage *inputImage;
    CIVector *inputScalesR;
    CIVector *inputScalesB;
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
