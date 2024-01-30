@class UILabel, UIActivityIndicatorView;

@interface ACUISpinnerTitle : UIView {
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
