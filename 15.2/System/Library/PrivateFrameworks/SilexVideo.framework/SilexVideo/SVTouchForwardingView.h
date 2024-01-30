@interface SVTouchForwardingView : UIView

@property (nonatomic) double lastTouchTimestamp;
@property (copy, nonatomic, setter=onTouch:) id /* block */ touchedBlock;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
