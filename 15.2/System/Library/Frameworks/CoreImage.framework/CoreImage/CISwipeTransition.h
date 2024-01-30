@class CIVector, CIColor, CIImage, NSNumber;

@interface CISwipeTransition : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSNumber *inputTime;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputOpacity;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
