@interface CIImageProcessorKernel : NSObject

@property (class, readonly) int outputFormat;
@property (class, readonly) BOOL outputIsOpaque;
@property (class, readonly) BOOL synchronizeInputs;

+ (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputs:(id)a1 arguments:(id)a2 error:(id *)a3;
+ (int)formatForInputAtIndex:(int)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowCompressedInputsAndOutputs;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)a0;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)skipFormatChecks;
+ (unsigned long long)_digestForArgs:(id)a0;
+ (int)outputFormatWithArguments:(id)a0;
+ (int)formatForInputAtIndex:(int)a0 arguments:(id)a1;
+ (BOOL)canOutputLossyCompressed;
+ (BOOL)canReduceOutputChannels;

@end
