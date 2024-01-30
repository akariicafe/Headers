@class CIImage, NSNumber;

@interface CIEdgeWork : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIEdgeWork;
- (id)_CIEdgeWorkContrast;

@end
