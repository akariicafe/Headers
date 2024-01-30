@interface FBSProcessor : CIImageProcessorKernel

+ (BOOL)synchronizeInputs;
+ (int)formatForInputAtIndex:(int)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (int)outputFormat;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)skipFormatChecks;

@end
