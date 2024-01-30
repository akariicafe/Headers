@class MTVisualStylingProvider;

@interface SBUIActionKeylineView : UIView {
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (nonatomic) double height;

- (void)willMoveToSuperview:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)_updateCornerMask;
- (void)layoutSubviews;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (double)heightInPixels;

@end
