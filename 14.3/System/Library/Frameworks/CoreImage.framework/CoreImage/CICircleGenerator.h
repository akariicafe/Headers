@class CIColor, CIVector, NSNumber;

@interface CICircleGenerator : CIFilter {
    CIColor *inputColor;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputEdgeBlur;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CICircle;

@end
