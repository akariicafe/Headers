@interface InpaintingSinglePassFilter : CIImageProcessorKernel

+ (BOOL)synchronizeInputs;
+ (id)runInpaintingNeuralNetworkOnSRGBImage:(id)a0 usingThresholdedMask:(id)a1 inpaintingResourceDescriptor:(id)a2 espressoResources:(id)a3 executionContext:(id)a4 error:(id *)a5;
+ (int)formatForInputAtIndex:(int)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)a0;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (int)outputFormat;
+ (id)performInpaintingAndBlendingOnSRGBImage:(id)a0 usingThresholdedMask:(id)a1 blendingRadius:(int)a2 inpaintingResourceDescriptor:(id)a3 espressoResources:(id)a4 executionContext:(id)a5;
+ (BOOL)allowPartialOutputRegion;
+ (id)performSinglePassInpaintingPipelineOnImage:(id)a0 usingMask:(id)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 additionalParameters:(id)a3 espressoResources:(id)a4 executionContext:(id)a5;

@end
