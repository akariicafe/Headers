@protocol _SBProximityTouchHandlingDelegate;

@interface _SBProximityTouchHandlingView : UIView {
    id<_SBProximityTouchHandlingDelegate> _delegate;
    double _statusBarHeight;
}

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
