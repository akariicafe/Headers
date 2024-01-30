@class UIResponder;
@protocol UITextInput;

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer

@property (weak) UIResponder<UITextInput> *textView;
@property (readonly, nonatomic) BOOL isLongPress;

- (BOOL)_isGestureType:(long long)a0;
- (void)startTimer;
- (BOOL)_allowsForShortDelay;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)isWithinRecentTap;
- (BOOL)shouldUseLegacyBehavior;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)isCloseToCaret;
- (BOOL)_tracksPointerTouch;

@end
