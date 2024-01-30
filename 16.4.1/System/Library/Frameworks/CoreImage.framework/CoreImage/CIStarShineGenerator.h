@class CIVector, CIColor, NSNumber;

@interface CIStarShineGenerator : CIFilter

@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputCrossScale;
@property (retain, nonatomic) NSNumber *inputCrossAngle;
@property (retain, nonatomic) NSNumber *inputCrossOpacity;
@property (retain, nonatomic) NSNumber *inputCrossWidth;
@property (retain, nonatomic) NSNumber *inputEpsilon;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
