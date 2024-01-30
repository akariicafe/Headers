@class UILabel, UIActivityIndicatorView;

@interface VSSpinnerTitleView : UIView {
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}

- (void)layoutSubviews;
- (id)initWithTitle:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;

@end
