@class CIImage, NSNumber;

@interface CIKMeans : CIReductionFilter

@property (retain, nonatomic) CIImage *inputMeans;
@property (copy, nonatomic) NSNumber *inputCount;
@property (copy, nonatomic) NSNumber *inputPasses;
@property (copy, nonatomic) NSNumber *inputPerceptual;

+ (id)customAttributes;

- (id)outputImage;
- (id)_combine:(id)a0;
- (id)_kernelKmeans;
- (id)defuse:(id)a0 seed:(int)a1;

@end
