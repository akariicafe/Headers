@interface UIApplicationRotationFollowingWindow : UIWindow

@property (nonatomic) long long priorityLevel;
@property (nonatomic) BOOL limitToWindowLevel;

+ (BOOL)_isSystemWindow;

- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attached:(BOOL)a1;
- (BOOL)isInterfaceAutorotationDisabled;
- (id)_topMostWindow;
- (id)__autorotationSanityCheckObjectFromSource:(id)a0 selector:(SEL)a1;
- (void)_commonApplicationRotationFollowingWindowInit;
- (void)_handleStatusBarOrientationChange:(id)a0;
- (id)init;
- (void)applicationWindowRotated:(id)a0;
- (BOOL)_shouldControlAutorotation;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)initWithWindowScene:(id)a0;

@end
