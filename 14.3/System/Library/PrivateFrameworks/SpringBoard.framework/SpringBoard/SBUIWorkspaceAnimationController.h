@class SBWorkspaceTransitionRequest;

@interface SBUIWorkspaceAnimationController : SBUIAnimationController

@property (readonly, nonatomic) SBWorkspaceTransitionRequest *workspaceTransitionRequest;

- (id)initWithTransitionContextProvider:(id)a0;
- (id)initWithWorkspaceTransitionRequest:(id)a0;

@end
