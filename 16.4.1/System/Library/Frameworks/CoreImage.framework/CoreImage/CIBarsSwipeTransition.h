@class CIImage, NSNumber;

@interface CIBarsSwipeTransition : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputBarOffset;
@property (retain, nonatomic) NSNumber *inputTime;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
