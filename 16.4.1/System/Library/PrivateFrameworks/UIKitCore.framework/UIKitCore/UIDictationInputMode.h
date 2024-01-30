@class UITouch, UIKeyboardInputMode, NSMutableDictionary;

@interface UIDictationInputMode : UISpecializedInputMode {
    NSMutableDictionary *_cachedIcons;
}

@property (retain, nonatomic) UITouch *triggeringTouch;
@property (retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation;
@property (nonatomic) BOOL usingTypeAndTalk;

+ (BOOL)currentInputModeSupportsDictation;

- (id)indicatorIconForDictationLanguage:(id)a0 scaleFactor:(double)a1;
- (BOOL)includeBarHeight;
- (Class)viewControllerClass;
- (BOOL)showSWLayoutWithHWKeyboard;
- (void).cxx_destruct;

@end
