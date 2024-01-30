@interface CIFileSaverProcessor : CIImageProcessorKernel

+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (BOOL)synchronizeInputs;
+ (BOOL)canReduceOutputChannels;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowPartialOutputRegion;

@end
