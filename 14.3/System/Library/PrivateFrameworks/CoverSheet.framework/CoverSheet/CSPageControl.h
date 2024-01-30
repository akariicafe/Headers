@class _UILegibilitySettings;

@interface CSPageControl : UIPageControl {
    _UILegibilitySettings *_sbLegibilitySettings;
}

@property (nonatomic) unsigned long long cameraPageIndex;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForPageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedFrameForPageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 desiredSize:(struct CGSize { double x0; double x1; })a1;

- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (id)_cameraIndicator;
- (void)setLegibilitySettings:(id)a0;
- (void)_rebuildIndicators;
- (void).cxx_destruct;
- (id)_currentPageIndicatorColor;
- (id)_pageIndicatorColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateForLegibility;

@end
