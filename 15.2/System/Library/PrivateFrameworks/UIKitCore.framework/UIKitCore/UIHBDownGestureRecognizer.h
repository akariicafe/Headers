@class UIDelayedAction, NSMutableSet, NSSet;

@interface UIHBDownGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_delayedAction;
    NSMutableSet *_currentlyPressedTypes;
    NSSet *_requiredPressTypes;
}

@property (nonatomic) double maximumIntervalBetweenPresses;

- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_processPresses:(id)a0;
- (void)_succeed;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)setAllowedPressTypes:(id)a0;
- (void).cxx_destruct;
- (BOOL)_allRequiredButtonsDown;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)_fail;

@end
