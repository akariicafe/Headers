@class _UIBackdropView, UIView, UIControl;

@interface SUSegmentedControlBar : UIView {
    UIControl *_control;
    _UIBackdropView *_backdropView;
    UIView *_separatorView;
}

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (id)initWithSegmentedControl:(id)a0;

@end
