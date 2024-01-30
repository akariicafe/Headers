@class _UIPlatterView, UIView;

@interface _UIPlatterContainerView : UIView {
    UIView *_updatedTargetWrapper;
}

@property (retain, nonatomic) _UIPlatterView *source;
@property (retain, nonatomic) _UIPlatterView *target;
@property (retain, nonatomic) _UIPlatterView *updatedTarget;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateTransforms;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyRotation:(double)a0;
- (void)applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withSize:(struct CGSize { double x0; double x1; })a1;

@end
