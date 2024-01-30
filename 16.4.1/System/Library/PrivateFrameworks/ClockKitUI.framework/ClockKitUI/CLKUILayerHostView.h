@class UIView;

@interface CLKUILayerHostView : UIView

@property (weak, nonatomic) UIView *superviewDelegate;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)superview;

@end
