@class UIImage, TintedView, UIView;

@interface LineGraphView : UIView {
    BOOL _showingTintedLine;
    UIImage *_lineImage;
    UIView *_tintedLineClipView;
    TintedView *_tintedLineView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resizeSelectedLineClipViewWithLeftX:(double)a0 rightX:(double)a1;
- (void)setShowingSelectedLine:(BOOL)a0;
- (void)setGraphImageSet:(id)a0;
- (void)setSelectedLineImage:(id)a0;

@end
