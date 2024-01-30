@class UIView;

@interface _SKUIClickThroughWindow : UIWindow

@property (retain, nonatomic) UIView *interactionView;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
