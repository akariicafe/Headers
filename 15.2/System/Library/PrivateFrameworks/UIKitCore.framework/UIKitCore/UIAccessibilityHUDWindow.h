@interface UIAccessibilityHUDWindow : UIApplicationRotationFollowingWindow

@property (class, readonly, nonatomic) UIAccessibilityHUDWindow *sharedWindow;

+ (void)removeSharedWindow;
+ (void)createSharedWindowWithScene:(id)a0;

- (double)_adjustedWindowLevelFromLevel:(double)a0;

@end
