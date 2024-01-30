@interface SXTouchForwardingView : UIView

@property (nonatomic) double lastTouchTimestamp;
@property (copy, nonatomic, setter=onTouch:) id /* block */ touchedBlock;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
