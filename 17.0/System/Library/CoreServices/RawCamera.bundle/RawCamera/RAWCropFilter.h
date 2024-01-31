@class CIImage, CIVector;

@interface RAWCropFilter : RAWFilter {
    CIImage *inputImage;
    CIVector *inputCropRect;
}

- (void).cxx_destruct;
- (id)outputImage;

@end
