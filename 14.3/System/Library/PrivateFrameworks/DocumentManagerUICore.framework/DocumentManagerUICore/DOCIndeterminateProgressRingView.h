@class CABasicAnimation;

@interface DOCIndeterminateProgressRingView : UIView {
    CABasicAnimation *_spinnerAnimation;
}

+ (Class)layerClass;

- (void)setTintColor:(id)a0;
- (void).cxx_destruct;
- (void)_removeAllAnimations:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateShapePath;

@end
