@class CIImage;

@interface RAWConvertLinearToSRGB : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
}

- (void).cxx_destruct;
- (id)outputImage;

@end
