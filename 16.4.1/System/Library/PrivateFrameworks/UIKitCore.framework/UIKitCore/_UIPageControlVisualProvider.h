@class UIImage, UIPageControl;

@interface _UIPageControlVisualProvider : NSObject {
    UIPageControl *_pageControl;
    long long _displayedPage;
}

@property (readonly, nonatomic) long long displayedPage;
@property (nonatomic) long long interactionState;
@property (retain, nonatomic) UIImage *preferredIndicatorImage;
@property (retain, nonatomic) UIImage *preferredActiveIndicatorImage;
@property (nonatomic) double indicatorOpacity;

- (void)invalidateIndicators;
- (BOOL)shouldDisableTouchTracking;
- (void)didUpdateLayoutDirection;
- (void)didUpdateCustomLayoutValues;
- (void)updateDisplayedPageToCurrentPage;
- (void)didUpdateNumberOfPages;
- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (id)customActiveIndicatorImageForPage:(long long)a0;
- (void)pruneArchivedSubviews:(id)a0;
- (void)didUpdatePageIndicatorTintColor;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didEndTrackingWithTouch:(id)a0;
- (id)customIndicatorImageForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })indicatorFrameForPage:(long long)a0;
- (void)setCustomIndicatorImage:(id)a0 forPage:(long long)a1;
- (void)didUpdateInteractionTypeAvailability;
- (void)layoutSubviews;
- (void)didUpdateBackgroundStyle;
- (void)didUpdateBackgroundEffect;
- (void)traitCollectionDidChangeOnSubtree:(id)a0;
- (id)initWithPageControl:(id)a0;
- (void)teardownPageControl;
- (void)setCustomActiveIndicatorImage:(id)a0 forPage:(long long)a1;
- (void)prepare;
- (void).cxx_destruct;

@end
