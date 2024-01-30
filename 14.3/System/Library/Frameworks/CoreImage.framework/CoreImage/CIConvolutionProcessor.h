@interface CIConvolutionProcessor : CIImageProcessorKernel

+ (BOOL)canReduceOutputChannels;
+ (int)outputFormat;
+ (id)applyBoxToImage:(id)a0 width:(int)a1 height:(int)a2;
+ (BOOL)synchronizeInputs;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)a0;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (id)applyConToImage:(id)a0 width:(int)a1 height:(int)a2 bias:(double)a3 weights:(id)a4;

@end
