@class UIResponder;
@protocol UITextInput;

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer

@property (weak) UIResponder<UITextInput> *textView;
@property (readonly, nonatomic) BOOL isLongPress;

- (void)startTimer;
- (BOOL)_isGestureType:(long long)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)_tracksPointerTouch;
- (BOOL)_allowsForShortDelay;
- (BOOL)isWithinRecentTap;
- (BOOL)isCloseToCaret;
- (BOOL)shouldUseLegacyBehavior;
- (void).cxx_destruct;
- (void)invalidate;

@end
