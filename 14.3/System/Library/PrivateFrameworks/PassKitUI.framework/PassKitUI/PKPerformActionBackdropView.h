@class UIView;

@interface PKPerformActionBackdropView : UIView {
    UIView *_backdropView;
}

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)shakeImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)smallShakeImage;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
