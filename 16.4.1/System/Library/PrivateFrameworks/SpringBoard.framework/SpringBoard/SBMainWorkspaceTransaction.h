@class SBMainWorkspaceTransitionRequest;

@interface SBMainWorkspaceTransaction : SBWorkspaceTransaction

@property (readonly, nonatomic) SBMainWorkspaceTransitionRequest *transitionRequest;

- (id)initWithTransitionRequest:(id)a0;
- (void)_didComplete;

@end
