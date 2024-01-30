@class NSString, UIViewController, NSCountedSet;

@interface SBMainScreenActiveInterfaceOrientationWindow : SBWindow <BSDescriptionProviding, SBUIActiveOrientationObserver> {
    NSCountedSet *_orientationUpdateDisableReasons;
}

@property (readonly, copy, nonatomic) NSString *debugName;
@property (retain, nonatomic, setter=setContentViewController:) UIViewController *contentViewController;
@property (nonatomic) BOOL passesTouchesThrough;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)layoutContentViewControllerWithConstraints;

- (BOOL)_canBecomeKeyWindow;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)setRootViewController:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)setHidden:(BOOL)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithDebugName:(id)a0;
- (BOOL)isActive;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (BOOL)isDisablingInterfaceOrientationChanges;
- (void)disableInterfaceOrientationChangesForReason:(id)a0;
- (void)enableInterfaceOrientationChangesForReason:(id)a0;
- (void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)a0;
- (unsigned long long)effectiveRootViewControllerSupportedInterfaceOrientations;

@end
