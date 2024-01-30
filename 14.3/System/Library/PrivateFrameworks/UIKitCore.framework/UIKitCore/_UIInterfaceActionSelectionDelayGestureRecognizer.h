@class UIDelayedAction;

@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) UIDelayedAction *delayedAction;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)_timerSatisfied;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
