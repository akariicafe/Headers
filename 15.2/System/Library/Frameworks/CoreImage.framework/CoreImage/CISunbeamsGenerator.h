@class CIVector, CIColor, NSNumber;

@interface CISunbeamsGenerator : CIFilter {
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputSunRadius;
    NSNumber *inputMaxStriationRadius;
    NSNumber *inputStriationStrength;
    NSNumber *inputStriationContrast;
    NSNumber *inputTime;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CISunbeams;

@end
