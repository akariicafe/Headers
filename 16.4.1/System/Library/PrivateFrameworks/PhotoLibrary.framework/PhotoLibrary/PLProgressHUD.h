@class _UIBackdropView, UIActivityIndicatorView, UIImageView, UILabel;

@interface PLProgressHUD : UIView {
    _UIBackdropView *_backdropView;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
    UIImageView *_checkmarkView;
    BOOL _isShowing;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)done;
- (void)dealloc;
- (void)layoutSubviews;
- (void)hide;
- (void)showInView:(id)a0;

@end
