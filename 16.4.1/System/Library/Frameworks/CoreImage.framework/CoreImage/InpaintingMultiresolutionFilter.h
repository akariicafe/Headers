@interface InpaintingMultiresolutionFilter : NSObject

+ (id)performMultiresolutionInpaintingPipelineOnImage:(id)a0 usingMask:(id)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 additionalParameters:(id)a3 espressoResources:(id)a4 executionContext:(id)a5;

@end
