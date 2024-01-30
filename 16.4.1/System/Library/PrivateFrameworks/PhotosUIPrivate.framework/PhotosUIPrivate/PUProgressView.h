@class UIActivityIndicatorView;

@interface PUProgressView : UIView {
    UIActivityIndicatorView *_spinner;
}

@property (readonly) long long style;

- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)showInView:(id)a0 animated:(BOOL)a1 afterDelay:(double)a2;
- (void)hideAnimated:(BOOL)a0;

@end
