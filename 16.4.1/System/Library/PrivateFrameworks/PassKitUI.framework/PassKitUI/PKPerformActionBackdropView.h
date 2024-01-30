@class UIView;

@interface PKPerformActionBackdropView : UIView {
    UIView *_backdropView;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)smallShakeImage;
- (void)shakeImage;

@end
