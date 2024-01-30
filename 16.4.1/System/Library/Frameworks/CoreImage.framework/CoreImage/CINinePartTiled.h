@class CIImage, CIVector, NSNumber;

@interface CINinePartTiled : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputBreakpoint0;
@property (retain, nonatomic) CIVector *inputBreakpoint1;
@property (retain, nonatomic) CIVector *inputGrowAmount;
@property (retain, nonatomic) NSNumber *inputFlipYTiles;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelAlt;

@end
