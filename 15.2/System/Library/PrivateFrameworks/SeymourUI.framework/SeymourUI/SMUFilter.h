@interface SMUFilter : NSObject

+ (id)gaussianBlurFilterWithInputRadius:(double)a0 inputHardEdges:(id)a1 inputNormalizeEdges:(id)a2 inputQuality:(id)a3 inputIntermediateBitDepth:(id)a4 inputDither:(id)a5 name:(id)a6;
+ (id)programTextBlurFilter1;
+ (id)programTextColorMatrixFilter;
+ (id)programTextBlurFilter2;
+ (id)programTextBackgroundVibrantColorMatrixFilter;
+ (void)applyProgramTextFiltersToLayer:(id)a0;
+ (void)applyProgramVibrantColorFilterToLayer:(id)a0;

@end
