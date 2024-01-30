@class CIImage;

@interface CIASGPercent : CIFilter {
    CIImage *inputImage;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)outputImageScale:(double)a0 outset:(int)a1 hKernel:(id)a2 vKernel:(id)a3;

@end
