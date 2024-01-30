@class UIPress, NSMutableSet;

@interface _UIFocusLinearMovementDebugGestureRecognizer : UIGestureRecognizer {
    UIPress *_press;
    BOOL _allowsGroupMode;
    NSMutableSet *_presses;
}

@property (nonatomic, getter=isGroupMode) BOOL groupMode;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_update;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1 allowsGroupMode:(BOOL)a2;

@end
