@class CIImage, CIVector;

@interface RAWCropFilter : RAWFilter {
    CIImage *inputImage;
    CIVector *inputCropRect;
}

- (id)outputImage;
- (void).cxx_destruct;

@end
