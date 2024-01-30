@class UIDelayedAction, NSMutableSet, NSSet;

@interface UIHBDownGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_delayedAction;
    NSMutableSet *_currentlyPressedTypes;
    NSSet *_requiredPressTypes;
}

@property (nonatomic) double maximumIntervalBetweenPresses;

- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)_succeed;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_processPresses:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)setAllowedPressTypes:(id)a0;
- (void)_fail;
- (void).cxx_destruct;
- (BOOL)_allRequiredButtonsDown;

@end
