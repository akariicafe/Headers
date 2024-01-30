@class CIImage, MLModel, NSNumber;

@interface CICoreMLModelFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) MLModel *inputModel;
@property (retain, nonatomic) NSNumber *inputHeadIndex;
@property (retain, nonatomic) NSNumber *inputSoftmaxNormalization;

+ (id)customAttributes;

- (id)outputImage;

@end
