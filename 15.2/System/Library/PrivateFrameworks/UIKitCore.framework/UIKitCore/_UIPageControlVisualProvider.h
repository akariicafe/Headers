@class UIImage, UIPageControl;

@interface _UIPageControlVisualProvider : NSObject {
    UIPageControl *_pageControl;
    long long _displayedPage;
}

@property (readonly, nonatomic) long long displayedPage;
@property (nonatomic) long long interactionState;
@property (retain, nonatomic) UIImage *preferredIndicatorImage;

- (void)traitCollectionDidChangeOnSubtree:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)didUpdateBackgroundEffect;
- (void)layoutSubviews;
- (BOOL)shouldDisableTouchTracking;
- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (void)didUpdateNumberOfPages;
- (void)prepare;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (void)didUpdatePageIndicatorTintColor;
- (id)initWithPageControl:(id)a0;
- (void)pruneArchivedSubviews:(id)a0;
- (void)didUpdateInteractionTypeAvailability;
- (void)didUpdateCustomLayoutValues;
- (void)teardownPageControl;
- (void)didEndTrackingWithTouch:(id)a0;
- (void)setCustomIndicatorImage:(id)a0 forPage:(long long)a1;
- (void)updateDisplayedPageToCurrentPage;
- (id)customIndicatorImageForPage:(long long)a0;
- (void)didUpdateBackgroundStyle;
- (void)didUpdateLayoutDirection;
- (void)invalidateIndicators;

@end
