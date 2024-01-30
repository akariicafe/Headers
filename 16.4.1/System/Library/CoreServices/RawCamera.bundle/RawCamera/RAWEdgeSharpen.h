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
- (id)customAttributes;
- (void).cxx_destruct;

@end
