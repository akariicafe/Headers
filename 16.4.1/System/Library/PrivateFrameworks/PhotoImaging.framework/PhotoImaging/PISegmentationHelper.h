@interface PISegmentationHelper : NSObject

+ (id)infillMaskForSegmentationMatte:(id)a0;
+ (id)upsampleBackgroundImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computeAvoidingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1 maxYMotion:(double)a2 segmentationMatte:(id)a3 layoutConfiguration:(id)a4 context:(id)a5;
+ (double)_computeHeadroomZoomFactorWithVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleCenter:(struct CGPoint { double x0; double x1; })a1 initialOverlap:(struct PISegmentationClockOverlapResult { id x0; unsigned long long x1; double x2; double x3; })a2 matte:(id)a3 layoutConfiguration:(id)a4 context:(id)a5;
+ (id)backgroundForImage:(id)a0 matte:(id)a1;
+ (id)backgroundForImage:(id)a0 matte:(id)a1 infill:(id)a2;
+ (struct PISegmentationBimodalScore { float x0; float x1; float x2; })bimodalScoreForHistogram:(id)a0;
+ (double)computeAlphaCoverageWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 foregroundImage:(id)a1 context:(id)a2;
+ (double)computeAvoidOverlapYOffsetWithVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1 segmentationMatte:(id)a2 layoutConfiguration:(id)a3 outputUnsafeOverlap:(double *)a4 context:(id)a5;
+ (struct PISegmentationClockOverlapResult { id x0; unsigned long long x1; double x2; double x3; })computeClockLayerOrderWithVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 foregroundImage:(id)a1 layoutConfiguration:(id)a2 context:(id)a3;
+ (struct PISegmentationClockOverlapResult { id x0; unsigned long long x1; double x2; double x3; })computeClockLayerOrderWithVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 segmentationMatte:(id)a1 layoutConfiguration:(id)a2 context:(id)a3 interactive:(BOOL)a4;
+ (double)computeHeadroomZoomFactorWithVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomTowardsTop:(BOOL *)a1 matte:(id)a2 layoutConfiguration:(id)a3 context:(id)a4;
+ (struct PISegmentationInactiveResult { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })computeInactiveFrameWithVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1 canUpdateVisibleRect:(BOOL)a2 segmentationMatte:(id)a3 layoutConfiguration:(id)a4 context:(id)a5;
+ (double)computeMatteCoverageWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 segmentationMatte:(id)a1 context:(id)a2;
+ (double)computeTargetOverlapYOffsetWithVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1 segmentationMatte:(id)a2 layoutConfiguration:(id)a3 context:(id)a4;
+ (id)debugImageForColorAnalysis:(id)a0 inputImage:(id)a1 visibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)debugImageWithInputImage:(id)a0 finalLayout:(id)a1 intermediateLayout:(id)a2 faceRects:(id)a3 saliencyPreferrectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 saliencyAcceptableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
+ (id)debugImageWithInputImage:(id)a0 layout:(id)a1 faceRects:(id)a2 saliencyPreferrectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 saliencyAcceptableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (id)debugPreviewRenderWithBackground:(id)a0 foreground:(id)a1 layout:(id)a2 style:(id)a3;
+ (id)dilateMask:(id)a0 withRadius:(double)a1;
+ (id)erodeMask:(id)a0 withRadius:(double)a1;
+ (id)foregroundForImage:(id)a0 matte:(id)a1;
+ (float)groundedScoreForSegmentationMatte:(id)a0 context:(id)a1;
+ (id)histogramForSegmentationMatte:(id)a0;
+ (id)histogramForSegmentationMatteImage:(id)a0;
+ (id)imageWithColor:(id)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)invertImage:(id)a0;
+ (id)localConfidenceImage:(id)a0;
+ (float)localConfidenceScoreForLocalConfidenceImage:(id)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2;
+ (BOOL)matteHistogramIndicatesSubjectDetected:(id)a0;
+ (id)openMask:(id)a0 withRadius:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleFactor:(double)a1 scaleCenter:(struct CGPoint { double x0; double x1; })a2;
+ (id)thresholdImage:(id)a0 withThreshold:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tightCropFrameFromMatteImage:(id)a0;
+ (id)upsampleMatteImage:(id)a0 guideImage:(id)a1;

@end
