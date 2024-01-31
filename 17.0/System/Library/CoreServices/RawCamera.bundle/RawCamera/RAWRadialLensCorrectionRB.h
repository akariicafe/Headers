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

- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)outputImage;
- (BOOL)makeMapImages;

@end
