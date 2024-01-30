@class CIImage;

@interface RAWConvertLinearToSRGB : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
}

- (id)outputImage;
- (void).cxx_destruct;

@end
