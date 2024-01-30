@class CIImage;

@interface CIComicEffect : CIFilter {
    CIImage *inputImage;
}

+ (id)customAttributes;

- (id)outputImage;

@end
