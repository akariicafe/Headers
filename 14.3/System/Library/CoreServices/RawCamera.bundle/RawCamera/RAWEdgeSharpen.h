@class CIImage, NSNumber;

@interface RAWEdgeSharpen : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputPreSharpenAmount;
    NSNumber *inputPreSharpenBlurAmount;
    NSNumber *inputVersion;
}

+ (id)customAttributes;

- (id)customAttributes;
- (void).cxx_destruct;
- (id)outputImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;

@end
