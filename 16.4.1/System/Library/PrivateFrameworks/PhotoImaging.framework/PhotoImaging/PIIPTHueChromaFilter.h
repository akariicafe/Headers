@interface PIIPTHueChromaFilter : CIFilter

+ (id)convertHueChromaImageToIPT:(id)a0;
+ (id)convertHueChromaImageToRGB:(id)a0;
+ (id)convertIPTImageToHueChroma:(id)a0;
+ (id)convertIPTImageToRGB:(id)a0;
+ (id)convertRGBImageToHueChroma:(id)a0;
+ (id)convertRGBImageToIPT:(id)a0;
+ (id)denormalizeHueChromaImage:(id)a0;
+ (id)hueChromaKernels;
+ (id)kernelNamed:(id)a0;
+ (id)normalizeHueChromaImage:(id)a0;
+ (id)scaleHueKernel;

@end
