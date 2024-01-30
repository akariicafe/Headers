@class NSStringDrawingContext;

@interface PLLargeTextPlatterHeaderContentViewLayoutManager : PLPlatterHeaderContentViewLayoutManager {
    NSStringDrawingContext *_drawingContext;
    double _referenceWidth;
    struct CGSize { double width; double height; } _cachedTitleBoundingRectSize;
    unsigned long long _cachedTitleNumberOfLines;
}

+ (double)contentBaselineToBoundsBottomWithFont:(id)a0 boundsWidth:(double)a1 scale:(double)a2;

- (id)_dateLabelFont;
- (void).cxx_destruct;
- (double)headerHeightForWidth:(double)a0;
- (double)contentBaseline;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleLabelBoundsThatFitsWidth:(double)a0;
- (struct CGSize { double x0; double x1; })_boundingRectSizeForLabel:(id)a0 width:(double)a1 numberOfLines:(inout unsigned long long *)a2;
- (double)_dateLabelBaselineOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dateLabelBoundsThatFitsWidth:(double)a0;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (double)_largeTextUtilityLabelBaselineOffset;
- (double)_titleLabelBaselineOffset;
- (unsigned long long)_titleLabelNumberOfLinesThatFitsWidth:(double)a0;
- (void)_updateCachedTitleLabelSizeInfoIfNecessaryWithWidth:(double)a0;
- (struct CGSize { double x0; double x1; })_utilityViewSizeThatFitsWidth:(double)a0;
- (void)invalidateCachedSizeInfo;
- (void)layoutDateLabelWithScale:(double)a0;
- (void)layoutIconButtonsWithScale:(double)a0;
- (void)layoutTitleLabelWithTrailingXLimit:(double)a0 scale:(double)a1;
- (void)layoutUtilityButtonWithScale:(double)a0;

@end
