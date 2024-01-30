@class CIImage, NSArray;

@interface PIApertureRedEyeFilter : CIFilter {
    CIImage *inputImage;
    NSArray *inputSpots;
}

- (id)outputImage;
- (void).cxx_destruct;

@end
