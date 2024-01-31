@interface AXPreferencesFrameworkGlue : NSObject

+ (void)accessibilityInitializeBundle;

- (id)_formatTime:(double)a0 showHours:(BOOL *)a1 showSubseconds:(BOOL)a2;

@end
