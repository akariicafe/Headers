@class NSTimer, NSArray, UIScrollView;

@interface _UIFocusDebugWindow : UIWindow {
    NSTimer *_timer;
    NSArray *_cacheModules;
    UIScrollView *_scrollView;
    struct CGPoint { double x; double y; } _lastDragPoint;
}

+ (BOOL)_isSystemWindow;
+ (BOOL)hasAnyModules;
+ (id)moduleClasses;

- (id)initWithWindowScene:(id)a0;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (BOOL)isTransparentFocusItem;
- (BOOL)_isEligibleForFocusOcclusion;
- (void)_updateTimer;
- (void)setHidden:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)canBecomeKeyWindow;
- (void)_update:(id)a0;
- (void).cxx_destruct;
- (void)drag:(id)a0;

@end
