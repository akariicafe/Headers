@interface UIAccessibilityHUDWindow : UIApplicationRotationFollowingWindow

@property (class, readonly, nonatomic) UIAccessibilityHUDWindow *sharedWindow;

+ (void)createSharedWindowWithScene:(id)a0;
+ (void)removeSharedWindow;

- (double)_adjustedWindowLevelFromLevel:(double)a0;

@end
