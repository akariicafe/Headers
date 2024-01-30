@class MTVisualStylingProvider;

@interface SBUIActionKeylineView : UIView {
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (nonatomic) double height;

- (void)_updateCornerMask;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)init;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (double)heightInPixels;

@end
