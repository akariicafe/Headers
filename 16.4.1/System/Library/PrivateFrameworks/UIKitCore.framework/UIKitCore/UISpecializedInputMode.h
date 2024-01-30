@interface UISpecializedInputMode : UIKeyboardInputMode

@property (retain, nonatomic) Class viewControllerClass;

- (BOOL)includeBarHeight;
- (void)dealloc;
- (BOOL)showSWLayoutWithHWKeyboard;
- (void).cxx_destruct;
- (id)hardwareLayout;
- (BOOL)isSpecializedInputMode;

@end
