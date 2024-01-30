@class NSString, SBUISystemApertureElementTransitionContext;

@interface SBUISystemApertureElementUnassociatedContext : NSObject <SBUISystemApertureElementContext>

@property (readonly, nonatomic, getter=isFallbackContext) BOOL fallbackContext;
@property (readonly, nonatomic) SBUISystemApertureElementTransitionContext *transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unassociatedContext;

- (void).cxx_destruct;
- (id)requestAlertingAssertion;
- (void)requestNegativeResponseAnimation;
- (void)setElementNeedsUpdate;
- (void)setElementNeedsUpdateWithCoordinatedAnimations:(id /* block */)a0;
- (void)_logErrorForSelectorIfNeeded:(SEL)a0;
- (void)elementDidDismissMenu;
- (void)elementWillPresentMenu;
- (void)requestTransitionToMaximumSupportedLayoutMode;
- (void)requestTransitionToPreferredLayoutMode;
- (void)setElementNeedsLayoutUpdateWithOptions:(unsigned long long)a0 coordinatedAnimations:(id /* block */)a1;

@end
