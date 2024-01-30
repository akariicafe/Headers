@class SBWorkspaceTransientOverlay, SBTransientOverlayPresentationManager;

@interface SBWorkspaceTransientOverlayTransitionContext : SBWorkspaceTransitionContext

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) BOOL shouldDismissSiriUponPresentation;
@property (nonatomic) BOOL shouldPreserveAppSwitcher;
@property (retain, nonatomic) SBTransientOverlayPresentationManager *presentationManager;
@property (retain, nonatomic) SBWorkspaceTransientOverlay *transientOverlay;
@property (nonatomic) long long transitionType;

- (id)compactDescriptionBuilderWithMultilinePrefix:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;

@end
