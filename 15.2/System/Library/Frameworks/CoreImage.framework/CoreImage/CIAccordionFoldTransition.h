@class CIImage, NSNumber;

@interface CIAccordionFoldTransition : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) NSNumber *inputBottomHeight;
@property (retain, nonatomic) NSNumber *inputNumberOfFolds;
@property (retain, nonatomic) NSNumber *inputFoldShadowAmount;
@property (retain, nonatomic) NSNumber *inputTime;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelWarpS;
- (id)_kernelWarpT;
- (id)_kernel;
- (id)_kernelMix;

@end
