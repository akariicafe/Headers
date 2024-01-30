@class NSStringDrawingContext;

@interface PLLargeTextPlatterHeaderContentViewLayoutManager : PLPlatterHeaderContentViewLayoutManager {
    NSStringDrawingContext *_drawingContext;
    double _referenceWidth;
    struct CGSize { double width; double height; } _cachedTitleBoundingRectSize;
    unsigned long long _cachedTitleNumberOfLines;
}

+ (double)contentBaselineToBoundsBottomWithFont:(id)a0 boundsWidth:(double)a1 scale:(double)a2;

- (void)_updateCachedTitleLabelSizeInfoIfNecessaryWithWidth:(double)a0;
- (void)invalidateCachedSizeInfo;
- (struct CGSize { double x0; double x1; })_boundingRectSizeForLabel:(id)a0 width:(double)a1 numberOfLines:(inout unsigned long long *)a2;
- (void).cxx_destruct;
- (double)headerHeightForWidth:(double)a0;
- (void)layoutUtilityButtonWithScale:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dateLabelBoundsThatFitsWidth:(double)a0;
- (struct CGSize { double x0; double x1; })_utilityViewSizeThatFitsWidth:(double)a0;
- (void)layoutTitleLabelWithTrailingXLimit:(double)a0 scale:(double)a1;
- (double)_titleLabelBaselineOffset;
- (void)layoutDateLabelWithScale:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleLabelBoundsThatFitsWidth:(double)a0;
- (unsigned long long)_titleLabelNumberOfLinesThatFitsWidth:(double)a0;
- (double)_largeTextUtilityLabelBaselineOffset;
- (void)layoutIconButtonsWithScale:(double)a0;
- (id)_dateLabelFont;
- (double)contentBaseline;
- (double)_dateLabelBaselineOffset;
- (double)_largeTextLabelBaselineOffsetFromBottom;

@end
