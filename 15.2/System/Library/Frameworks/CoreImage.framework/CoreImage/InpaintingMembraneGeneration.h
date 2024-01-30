@interface InpaintingMembraneGeneration : CIImageProcessorKernel

+ (BOOL)synchronizeInputs;
+ (int)formatForInputAtIndex:(int)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)a0;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (int)outputFormat;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)initializeMembraneModelForResolution:(int)a0 error:(id *)a1;
+ (id)getMembraneModelForResolution:(int)a0 error:(id *)a1;
+ (int)selectMembraneProcessingResolutionBasedOnImageSize:(struct CGSize { double x0; double x1; })a0;
+ (id)fillSmoothMembraneForSRGBImage:(id)a0 andMask:(id)a1 error:(id *)a2;

@end
