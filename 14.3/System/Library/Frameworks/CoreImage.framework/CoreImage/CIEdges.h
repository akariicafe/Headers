@class CIImage, NSNumber;

@interface CIEdges : CIFilter {
    CIImage *inputImage;
    NSNumber *inputIntensity;
}

+ (id)customAttributes;

- (id)_CIEdges;
- (id)outputImage;

@end
