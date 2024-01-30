@interface UISpecializedInputMode : UIKeyboardInputMode

@property (retain, nonatomic) Class viewControllerClass;

- (void)dealloc;
- (BOOL)includeBarHeight;
- (BOOL)showSWLayoutWithHWKeyboard;
- (id)hardwareLayout;
- (BOOL)isSpecializedInputMode;

@end
