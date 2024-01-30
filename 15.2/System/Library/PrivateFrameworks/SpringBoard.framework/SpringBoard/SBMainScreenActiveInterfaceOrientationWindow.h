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

+ (BOOL)sb_autorotates;
+ (id)_traitsArbiterOrientationActuationRole;
+ (BOOL)layoutContentViewControllerWithConstraints;
+ (BOOL)_traitsArbiterOrientationActuationEnabled;

- (void)setRootViewController:(id)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (id)rootViewController;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)succinctDescription;
- (BOOL)isActive;
- (BOOL)_canBecomeKeyWindow;
- (void)setHidden:(BOOL)a0;
- (id)initWithScreen:(id)a0 scene:(id)a1 rootViewController:(id)a2 layoutStrategy:(id)a3 role:(id)a4 debugName:(id)a5;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithRole:(id)a0 debugName:(id)a1;
- (BOOL)isDisablingInterfaceOrientationChanges;
- (void)disableInterfaceOrientationChangesForReason:(id)a0;
- (void)enableInterfaceOrientationChangesForReason:(id)a0;
- (void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)a0;
- (void)_updateSupportedInterfaceOrientationsForTraitArbiterActuationIfNeeded;
- (unsigned long long)effectiveRootViewControllerSupportedInterfaceOrientations;

@end
