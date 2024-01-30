@class UITouch, UIKeyboardInputMode;

@interface UIDictationInputMode : UISpecializedInputMode

@property (retain, nonatomic) UITouch *triggeringTouch;
@property (retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation;

+ (BOOL)currentInputModeSupportsDictation;

- (Class)viewControllerClass;
- (BOOL)includeBarHeight;
- (void)dealloc;

@end
