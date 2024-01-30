@interface CICoreMLKernel : CIImageProcessorKernel

+ (int)outputFormat;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (void)copyInput:(id)a0 toBuffer:(struct __CVBuffer **)a1 usingFormat:(unsigned int)a2;
+ (void)copyToOutput:(id)a0 fromBuffer:(struct __CVBuffer **)a1 usingFormat:(unsigned int)a2;

@end
