@interface DelayedSpinner : NSObject

+ (void)hide;
+ (void)showWithDelay;
+ (void)_setShowStatusBarSpinnerTimer:(id)a0;
+ (void)_showStatusBarSpinner:(id)a0;
+ (void)_setShowStatusBarSpinner:(BOOL)a0 withDelay:(double)a1;

@end
