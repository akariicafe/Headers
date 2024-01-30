@class UIDelayedAction;

@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) UIDelayedAction *delayedAction;

- (void)_timerSatisfied;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
