@interface CIHighlightRecoveryProcessor : CIImageProcessorKernel

+ (int)outputFormat;
+ (id)functionConstantValuesTuningParameters:(id)a0;
+ (id)compilePipelineForDevice:(id)a0 functionName:(id)a1 constantValues:(id)a2;
+ (BOOL)synchronizeInputs;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowPartialOutputRegion;

@end
