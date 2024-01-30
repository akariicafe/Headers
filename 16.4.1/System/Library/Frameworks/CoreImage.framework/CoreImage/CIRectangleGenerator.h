@class CIColor, CIVector, NSNumber;

@interface CIRectangleGenerator : CIFilter {
    CIColor *inputColor;
    CIVector *inputRectangle;
    NSNumber *inputEdgeBlur;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIRectangle;

@end
