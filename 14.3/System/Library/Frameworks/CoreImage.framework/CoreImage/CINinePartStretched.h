@class CIImage, CIVector;

@interface CINinePartStretched : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputBreakpoint0;
@property (retain, nonatomic) CIVector *inputBreakpoint1;
@property (retain, nonatomic) CIVector *inputGrowAmount;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
