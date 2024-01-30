@class SBWorkspaceTransientOverlay, SBTransientOverlayPresentationManager, BSProcessHandle;

@interface SBWorkspaceTransientOverlayTransitionContext : SBWorkspaceTransitionContext

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) BOOL shouldDismissSiriUponPresentation;
@property (nonatomic) BOOL shouldPreserveAppSwitcher;
@property (retain, nonatomic) SBTransientOverlayPresentationManager *presentationManager;
@property (retain, nonatomic) SBWorkspaceTransientOverlay *transientOverlay;
@property (nonatomic) long long transitionType;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
