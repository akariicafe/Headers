@class CIImage, NSNumber;

@interface CIEdgePreserveUpsampleFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputSmallImage;
@property (retain, nonatomic) NSNumber *inputSpatialSigma;
@property (retain, nonatomic) NSNumber *inputLumaSigma;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelJointUpsamp;
- (id)_kernelJointUpsampRG;
- (id)_kernelGuideCombine;
- (id)_kernelGuideCombine4;
- (id)_kernelGuideMono;

@end
