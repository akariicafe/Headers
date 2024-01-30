@class CIImage, NSNumber, CIVector;

@interface CIDisparityRefinement : CIFilter

@property (retain) CIImage *inputDisparityImage;
@property (retain) CIImage *inputImage;
@property (copy) NSNumber *inputPropagateKernel;
@property (copy) NSNumber *inputSmoothSigma;
@property (copy) NSNumber *inputPropagateMinWeightSum;
@property (copy) NSNumber *inputPropagateSigmaLuma;
@property (copy) NSNumber *inputPropagateSigmaChma;
@property (copy) NSNumber *inputScale;
@property (copy) CIVector *inputOriginalSize;

+ (id)customAttributes;

- (id)_initialConversionRGB;
- (id)_smoothDisparity;
- (id)_propagateDisparityR1;
- (id)_pyramidGenerateLevel;
- (id)_propagateDisparity;
- (id)initialConversionForSize:(struct CGSize { double x0; double x1; })a0 useMetal:(BOOL)a1;
- (id)generatePyramidLevel:(id)a0 useMetal:(BOOL)a1;
- (id)outputImageUsingMetal:(BOOL)a0;
- (id)shiftmapLevelZeroWithSize:(struct CGSize { double x0; double x1; })a0 useMetal:(BOOL)a1;
- (id)propagateDisparity:(id)a0 pyramids:(id *)a1 useMetal:(BOOL)a2 computedPyramidLevels:(int)a3;
- (id)_combineImages;
- (id)smoothDisparityImage:(id)a0 useMetal:(BOOL)a1;
- (id)_propagateDisparityR1Combined;
- (id)_propagateDisparityCombined;
- (id)outputImage;

@end
