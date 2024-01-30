@class CIImage, NSNumber, CIVector;

@interface RAWVignetteRadial : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputVignetteK0;
    NSNumber *inputVignetteK1;
    NSNumber *inputVignetteK2;
    NSNumber *inputVignetteK3;
    NSNumber *inputVignetteK4;
    CIVector *inputVignetteCenter;
    id inputColorSpace;
    NSNumber *inputVignetteExecute;
}

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;

@end
