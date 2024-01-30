@interface ChronoCore.Application : UIApplication

@property (nonatomic, readonly) BOOL hostsSystemStatusBar;

- (BOOL)_hostsSystemStatusBar;
- (BOOL)_shouldAllowKeyboardArbiter;
- (id)init;
- (BOOL)_supportsAlwaysOnDisplay;
- (BOOL)_isSpringBoard;

@end
