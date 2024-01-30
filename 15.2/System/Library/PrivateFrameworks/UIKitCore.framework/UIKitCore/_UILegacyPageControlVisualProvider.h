@class UIImage, NSMutableArray, UIVisualEffectView;

@interface _UILegacyPageControlVisualProvider : _UIPageControlVisualProvider {
    UIImage *_currentPageImage;
    UIImage *_pageImage;
    NSMutableArray *_currentPageImages;
    NSMutableArray *_pageImages;
    UIVisualEffectView *_backgroundVisualEffectView;
    NSMutableArray *_indicators;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)effectiveContentView;
- (id)_modernColorEnabled:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_indicatorFrameAtIndex:(long long)a0;
- (void)_cachePageIndicatorImages;
- (id)_indicatorViewEnabled:(BOOL)a0 index:(long long)a1;
- (void)_setDisplayedPage:(long long)a0;
- (BOOL)_hasCustomImageForPage:(long long)a0 enabled:(BOOL)a1;
- (void)_transitionIndicator:(id)a0 toEnabled:(BOOL)a1 index:(long long)a2;
- (id)_cachedPageIndicatorCurrentImageForPage:(long long)a0;
- (double)_modernCornerRadius;
- (id)_cachedPageIndicatorImageForPage:(long long)a0;
- (void)_drawModernIndicatorInView:(id)a0 enabled:(BOOL)a1;
- (id)defaultActivePageIndicatorImage;
- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (void)didUpdateNumberOfPages;
- (void)prepare;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (void)didUpdatePageIndicatorTintColor;
- (void)pruneArchivedSubviews:(id)a0;
- (void).cxx_destruct;
- (id)preferredIndicatorImage;
- (id)_pageIndicatorImageForPage:(long long)a0;
- (id)_pageIndicatorCurrentImageForPage:(long long)a0;
- (void)didEndTrackingWithTouch:(id)a0;
- (void)updateDisplayedPageToCurrentPage;
- (double)_indicatorSpacing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_modernBounds;
- (void)invalidateIndicators;

@end
