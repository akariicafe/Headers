@interface DBStatusBarWindow : UIWindow

@property (nonatomic, getter=isRightHandDrive) BOOL rightHandDrive;

- (BOOL)_canBecomeKeyWindow;
- (BOOL)_reversesLinearFocusWrapping;

@end
