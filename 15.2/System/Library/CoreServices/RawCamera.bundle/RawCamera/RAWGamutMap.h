@class CIImage, NSNumber;

@interface RAWGamutMap : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputShouldWarn;
    NSNumber *inputVersion;
    NSNumber *inputGamutMapMax;
}

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (id)customAttributes;

@end
