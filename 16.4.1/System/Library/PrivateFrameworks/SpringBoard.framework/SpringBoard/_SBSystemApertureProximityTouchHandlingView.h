@protocol _SBSystemApertureProximityTouchHandlingViewDelegate;

@interface _SBSystemApertureProximityTouchHandlingView : UIView

@property (weak, nonatomic) id<_SBSystemApertureProximityTouchHandlingViewDelegate> delegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 hitTestsAsOpaque:(BOOL)a1;

@end
