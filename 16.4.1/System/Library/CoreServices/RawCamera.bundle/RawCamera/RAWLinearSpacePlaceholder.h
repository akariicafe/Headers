@class CIImage;

@interface RAWLinearSpacePlaceholder : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)customAttributes;
- (void).cxx_destruct;

@end
