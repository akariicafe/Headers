@class CIImage;

@interface RAWConvertSRGBtoLinear : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
}

- (id)outputImage;
- (void).cxx_destruct;

@end
