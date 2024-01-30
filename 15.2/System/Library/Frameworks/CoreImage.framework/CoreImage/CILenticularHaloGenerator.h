@class CIVector, CIColor, NSNumber;

@interface CILenticularHaloGenerator : CIFilter {
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputHaloRadius;
    NSNumber *inputHaloWidth;
    NSNumber *inputHaloOverlap;
    NSNumber *inputStriationStrength;
    NSNumber *inputStriationContrast;
    NSNumber *inputTime;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CILenticularHalo;

@end
