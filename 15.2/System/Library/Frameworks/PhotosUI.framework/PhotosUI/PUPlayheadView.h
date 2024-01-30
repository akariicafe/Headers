@class UIView;

@interface PUPlayheadView : UIView {
    UIView *_line;
    UIView *_outline;
    BOOL _tintColorForPlayhead;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)tintColorDidChange;

@end
