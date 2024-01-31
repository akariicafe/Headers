@class CIImage;

@interface RAWConvertSRGBtoLinear : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
}

- (void).cxx_destruct;
- (id)outputImage;

@end
