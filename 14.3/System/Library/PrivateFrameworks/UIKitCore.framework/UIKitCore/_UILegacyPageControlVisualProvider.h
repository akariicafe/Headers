@class UIVisualEffectView, UIImage, NSMutableArray, _UILegibilitySettings;

@interface _UILegacyPageControlVisualProvider : _UIPageControlVisualProvider {
    UIImage *_currentPageImage;
    UIImage *_pageImage;
    NSMutableArray *_currentPageImages;
    NSMutableArray *_pageImages;
    UIVisualEffectView *_backgroundVisualEffectView;
    NSMutableArray *_indicators;
}

@property (retain, nonatomic, getter=_legibilitySettings, setter=_setLegibilitySettings:) _UILegibilitySettings *_legibilitySettings;
@property (nonatomic, getter=_legibilityStyle, setter=_setLegibilityStyle:) long long _legibilityStyle;

- (void)didUpdateNumberOfPages;
- (void)pruneArchivedSubviews:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (void)updateDisplayedPageToCurrentPage;
- (void)didEndTrackingWithTouch:(id)a0;
- (void)didUpdatePageIndicatorTintColor;
- (void)prepare;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_transitionIndicator:(id)a0 toEnabled:(BOOL)a1 index:(long long)a2 legible:(BOOL)a3;
- (void).cxx_destruct;
- (id)_modernIndicatorImageEnabled:(BOOL)a0;
- (void)_cachePageIndicatorImages;
- (void)_transitionIndicator:(id)a0 toEnabled:(BOOL)a1 index:(long long)a2;
- (BOOL)_shouldDrawLegibly;
- (void)_modernTransitionIndicator:(id)a0 toEnabled:(BOOL)a1 index:(long long)a2 legible:(BOOL)a3;
- (id)_cachedPageIndicatorImageForPage:(long long)a0;
- (id)_createModernIndicatorImageFromView:(id)a0;
- (void)invalidateIndicators;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (void)_setDisplayedPage:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_modernBounds;
- (void)layoutSubviews;
- (id)preferredIndicatorImage;
- (id)_pageIndicatorImageForPage:(long long)a0;
- (double)_modernCornerRadius;
- (double)_indicatorSpacing;
- (BOOL)_hasCustomImageForPage:(long long)a0 enabled:(BOOL)a1;
- (id)_indicatorViewEnabled:(BOOL)a0 index:(long long)a1;
- (id)_cachedPageIndicatorCurrentImageForPage:(long long)a0;
- (id)_indicatorViewEnabled:(BOOL)a0 index:(long long)a1 legible:(BOOL)a2;
- (void)_drawModernIndicatorInView:(id)a0 enabled:(BOOL)a1;
- (id)_modernColorEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_indicatorFrameAtIndex:(long long)a0;
- (id)_pageIndicatorCurrentImageForPage:(long long)a0;
- (id)defaultActivePageIndicatorImage;
- (id)effectiveContentView;

@end
