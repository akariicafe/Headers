@interface UIApplicationRotationFollowingWindow : UIWindow

@property (nonatomic) long long priorityLevel;
@property (nonatomic) BOOL limitToWindowLevel;

+ (BOOL)_isSystemWindow;

- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)__autorotationSanityCheckObjectFromSource:(id)a0 selector:(SEL)a1;
- (id)_topMostWindow;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attached:(BOOL)a1;
- (id)init;
- (id)initWithWindowScene:(id)a0;
- (void)applicationWindowRotated:(id)a0;
- (void)_commonApplicationRotationFollowingWindowInit;
- (void)_handleStatusBarOrientationChange:(id)a0;
- (BOOL)_shouldControlAutorotation;
- (BOOL)isInterfaceAutorotationDisabled;

@end
