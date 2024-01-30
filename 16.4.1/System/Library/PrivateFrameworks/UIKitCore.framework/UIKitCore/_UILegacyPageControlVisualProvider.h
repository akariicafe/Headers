@class UIImage, NSMutableArray, UIVisualEffectView;

@interface _UILegacyPageControlVisualProvider : _UIPageControlVisualProvider {
    UIImage *_currentPageImage;
    UIImage *_pageImage;
    NSMutableArray *_currentPageImages;
    NSMutableArray *_pageImages;
    UIVisualEffectView *_backgroundVisualEffectView;
    NSMutableArray *_indicators;
}

- (void)invalidateIndicators;
- (id)_modernColorEnabled:(BOOL)a0;
- (void)updateDisplayedPageToCurrentPage;
- (void)didUpdateNumberOfPages;
- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (void)pruneArchivedSubviews:(id)a0;
- (void)didUpdatePageIndicatorTintColor;
- (id)preferredIndicatorImage;
- (id)_indicatorViewEnabled:(BOOL)a0 index:(long long)a1;
- (void)_transitionIndicator:(id)a0 toEnabled:(BOOL)a1 index:(long long)a2;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_cachedPageIndicatorCurrentImageForPage:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_modernBounds;
- (void)didEndTrackingWithTouch:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)effectiveContentView;
- (void)_setDisplayedPage:(long long)a0;
- (id)defaultActivePageIndicatorImage;
- (void)_cachePageIndicatorImages;
- (BOOL)_hasCustomImageForPage:(long long)a0 enabled:(BOOL)a1;
- (id)_pageIndicatorCurrentImageForPage:(long long)a0;
- (void)layoutSubviews;
- (double)_indicatorSpacing;
- (void)_drawModernIndicatorInView:(id)a0 enabled:(BOOL)a1;
- (double)_modernCornerRadius;
- (id)_cachedPageIndicatorImageForPage:(long long)a0;
- (void)prepare;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_indicatorFrameAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)_pageIndicatorImageForPage:(long long)a0;

@end
