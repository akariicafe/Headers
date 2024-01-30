@class InpaintingExecutionContext, CIVector, NSArray, CIImage, NSNumber;

@interface CIInpaintingFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputMaskImage;
@property (retain, nonatomic) CIVector *inputMaskBoundingBox;
@property (retain, nonatomic) NSArray *inputFaceBoundingBoxes;
@property (retain, nonatomic) NSArray *inputInpaintingProcessingResolutions;
@property (retain, nonatomic) NSNumber *inputInpaintingBlendingRadius;
@property (retain, nonatomic) NSNumber *inputInpaintingMode;
@property (readonly, getter=getLastProcessingResolution) int lastProcessingResolution;
@property (readonly, getter=getLastExecutionTime) double lastExecutionTime;
@property (readonly) InpaintingExecutionContext *executionContext;

+ (id)customAttributes;
+ (id)getEspressoResources;

- (id)performMultiresolutionInpaintingWithParameters:(id)a0;
- (BOOL)shouldFaceSpecificModelBeUsed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputMaskBoundingBoxAsValidCGRect;
- (id)performFullPipelineInpaintingWithParameters:(id)a0;
- (id)outputImage;
- (void)dealloc;
- (id)getSelectedGeneralInpaintingModelDescriptor;
- (id)init;
- (id)performTilingPipelineInpaintingWithParameters:(id)a0;
- (id)getSelectedFacesInpaintingModelDescriptor;
- (id)performSinglePassInpaintingWithParameters:(id)a0;

@end
