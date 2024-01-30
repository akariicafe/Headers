@class UIResponder, UIDelayedAction;
@protocol UITextInput;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
    UIDelayedAction *_secondDelayTimer;
}

@property (weak, nonatomic) UIResponder<UITextInput> *textInput;
@property (nonatomic) double secondDelay;
@property (readonly, nonatomic) BOOL secondDelayElapsed;
@property (weak, nonatomic) id userData;

- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)secondDelayElapsed:(id)a0;
- (void)startTimer;
- (void)setState:(long long)a0;
- (void)clearTimer;

@end
