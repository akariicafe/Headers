@class UIWindow;

@interface UIEditUserWordController : EditUserWordController {
    long long _oldPopoverStyle;
}

@property (copy, nonatomic) id /* block */ dismissCompletionHandler;
@property (retain, nonatomic, setter=_setRotationDecider:) UIWindow *_rotationDecider;

- (void)dealloc;
- (id)initWithText:(id)a0;
- (id)initWithText:(id)a0 andShortcut:(id)a1;
- (void)_dismiss;
- (void)viewDidLoad;
- (BOOL)_shouldSetDefaultFirstResponder;

@end
