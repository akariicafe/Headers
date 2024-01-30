@class UIResponder;
@protocol UITextInput;

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer

@property (weak) UIResponder<UITextInput> *textView;

- (BOOL)_tracksPointerTouch;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)isWithinRecentTap;
- (void).cxx_destruct;
- (void)startTimer;
- (BOOL)isCloseToCaret;
- (BOOL)_isGestureType:(long long)a0;
- (BOOL)_allowsForShortDelay;
- (BOOL)shouldUseLegacyBehavior;
- (void)invalidate;

@end
