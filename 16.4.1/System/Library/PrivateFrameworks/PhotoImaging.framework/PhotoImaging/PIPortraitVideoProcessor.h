@interface PIPortraitVideoProcessor : CIImageProcessorKernel

+ (int)outputFormat;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)allowCompressedInputsAndOutputs;
+ (BOOL)synchronizeInputs;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)outputIsOpaque;
+ (void)_configureRGBColorTexture:(id)a0 format:(int)a1 isHDR:(BOOL)a2;
+ (void)_updateRenderState:(id)a0 withLegacyCameraInfo:(id)a1;
+ (id)applyWithInputImage:(id)a0 disparityImage:(id)a1 inputPixelBuffer:(id)a2 disparityPixelBuffer:(id)a3 globalMetadata:(id)a4 timedMetadata:(id)a5 aperture:(id)a6 focusedDisparity:(id)a7 quality:(id)a8 debugMode:(id)a9 isHDR:(BOOL)a10 error:(out id *)a11;

@end
