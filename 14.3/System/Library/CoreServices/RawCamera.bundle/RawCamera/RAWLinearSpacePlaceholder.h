@class CIImage;

@interface RAWLinearSpacePlaceholder : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
}

+ (id)customAttributes;

- (id)customAttributes;
- (void).cxx_destruct;
- (id)outputImage;

@end
