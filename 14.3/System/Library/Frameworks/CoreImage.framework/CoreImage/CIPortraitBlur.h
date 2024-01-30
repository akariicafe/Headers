@class NSString, NSDictionary, CIImage, NSNumber;

@interface CIPortraitBlur : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurmapImage;
@property (retain) CIImage *inputMatteImage;
@property (copy, nonatomic) NSNumber *inputLumaNoiseScale;
@property (copy, nonatomic) NSNumber *inputScale;
@property (copy, nonatomic) NSNumber *inputAperture;
@property (retain, nonatomic) NSDictionary *inputTuningParameters;
@property (retain, nonatomic) NSString *inputShape;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (id)_kernelMetal;
- (id)_kernelWithShapesMetal;
- (id)_kernelsWithShapes;
- (id)_ourBlendKernelMetal;
- (id)_ourBlendKernel;
- (id)outputImage:(BOOL)a0;
- (id)outputImageV2;
- (id)outputImageV3;
- (id)_kernel;
- (id)outputImage;

@end
