@class MTVisualStylingProvider;

@interface SBUIActionKeylineView : UIView {
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (nonatomic) double height;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateCornerMask;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (double)heightInPixels;

@end
