@class UIView;

@interface _UIKBCompatInputView : UIView

@property (retain, nonatomic) UIView *touchableView;
@property (retain, nonatomic) UIView *snapshotView;

+ (BOOL)requiresConstraintBasedLayout;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_compatibleBounds;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)addSubview:(id)a0;
- (void)_didChangeKeyplaneWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)_hasAutolayoutHeightConstraint;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
