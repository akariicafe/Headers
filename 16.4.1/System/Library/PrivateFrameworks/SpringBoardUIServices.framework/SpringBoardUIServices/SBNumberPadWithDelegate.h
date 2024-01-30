@protocol SBNumberPadDelegate;

@interface SBNumberPadWithDelegate : TPNumberPad

@property (weak, nonatomic) id<SBNumberPadDelegate> delegate;

- (void)buttonDown:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)buttonUp:(id)a0;
- (void).cxx_destruct;
- (void)buttonCancelled:(id)a0;
- (id)buttonForPoint:(struct CGPoint { double x0; double x1; })a0 forEvent:(id)a1;
- (BOOL)touchAtPoint:(struct CGPoint { double x0; double x1; })a0 isCloseToButton:(id)a1;

@end
