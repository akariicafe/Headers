@class TSCHChartType;

@interface TSCHPresetImagerInfoBased : TSCHPresetImager {
    TSCHChartType *_chartType;
}

+ (id)presetImagerForChartType:(id)a0;

- (void).cxx_destruct;
- (id)imageWithPreset:(id)a0 target:(int)a1 imageSize:(struct CGSize { double x0; double x1; })a2 imageScale:(double)a3 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 documentRoot:(id)a5 shouldCache:(BOOL *)a6;
- (id)initWithChartType:(id)a0;
- (double)p_canvasScale;
- (id)p_chartType;
- (void)p_debugGenerateLayoutCacheWithPreset:(id)a0 target:(int)a1 imageSize:(struct CGSize { double x0; double x1; })a2 imageScale:(double)a3 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)p_imageRectAdjustments;
- (id)p_rectAdjustmentForChartType:(id)a0;
- (BOOL)p_shouldLayoutInwardForInsertionIcons;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_updateSwatchFrameForInwardLayoutIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outImageSize:(struct CGSize { double x0; double x1; } *)a1 outImageScale:(double *)a2 outSwatchOffset:(struct CGPoint { double x0; double x1; } *)a3 outCanvasScale:(double *)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_updateSwatchFrameForRectAdjustmentIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rectAdjustment:(id)a1 outSwatchOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })swatchImageEdgeInsetsForSize:(struct CGSize { double x0; double x1; })a0;

@end
