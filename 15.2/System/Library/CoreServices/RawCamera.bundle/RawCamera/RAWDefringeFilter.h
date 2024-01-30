@class CIImage, NSNumber;

@interface RAWDefringeFilter : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputWidth;
    NSNumber *inputAxialWidth;
    id inputColorSpace;
}

- (id)outputImage;
- (void).cxx_destruct;

@end
