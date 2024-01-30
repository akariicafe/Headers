@interface UISpecializedInputMode : UIKeyboardInputMode

@property (retain, nonatomic) Class viewControllerClass;

- (BOOL)includeBarHeight;
- (void)dealloc;
- (BOOL)isSpecializedInputMode;
- (id)hardwareLayout;

@end
