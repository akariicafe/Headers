@class CIImage, NSNumber;

@interface RAWDefringeFilter : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputWidth;
    NSNumber *inputAxialWidth;
    id inputColorSpace;
}

- (void).cxx_destruct;
- (id)outputImage;

@end
