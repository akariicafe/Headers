@class CIImage, CIVector;

@interface RAWBayerInterleavedFilter : RAWFilter {
    CIImage *inputImage00;
    CIImage *inputImage01;
    CIImage *inputImage10;
    CIImage *inputImage11;
    CIVector *inputExtent;
}

- (id)outputImage;
- (void).cxx_destruct;

@end
