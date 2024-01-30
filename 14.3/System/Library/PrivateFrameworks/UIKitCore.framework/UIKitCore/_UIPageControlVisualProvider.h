@class UIImage, UIPageControl;

@interface _UIPageControlVisualProvider : NSObject {
    UIPageControl *_pageControl;
    long long _displayedPage;
}

@property (readonly, nonatomic) long long displayedPage;
@property (nonatomic) long long interactionState;
@property (retain, nonatomic) UIImage *preferredIndicatorImage;

- (void)didUpdateNumberOfPages;
- (void)pruneArchivedSubviews:(id)a0;
- (id)customIndicatorImageForPage:(long long)a0;
- (BOOL)shouldDisableTouchTracking;
- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (void)updateDisplayedPageToCurrentPage;
- (void)didEndTrackingWithTouch:(id)a0;
- (void)didUpdatePageIndicatorTintColor;
- (void)prepare;
- (void)traitCollectionDidChangeOnSubtree:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)teardownPageControl;
- (void)didUpdateCustomLayoutValues;
- (void)setCustomIndicatorImage:(id)a0 forPage:(long long)a1;
- (void)invalidateIndicators;
- (void)didUpdateBackgroundStyle;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (id)initWithPageControl:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didUpdateAllowsContinuousInteraction;

@end
