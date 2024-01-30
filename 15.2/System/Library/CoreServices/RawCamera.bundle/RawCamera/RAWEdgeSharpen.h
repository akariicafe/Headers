@class CIImage, NSNumber;

@interface RAWEdgeSharpen : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputPreSharpenAmount;
    NSNumber *inputPreSharpenBlurAmount;
    NSNumber *inputVersion;
}

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (id)customAttributes;

@end
