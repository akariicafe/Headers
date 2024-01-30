@class SBLayoutState, SBWorkspaceTransaction, SBWorkspaceApplicationSceneTransitionContext, NSError;

@interface SBLayoutStateTransitionContext : NSObject

@property (readonly, weak, nonatomic) SBWorkspaceTransaction *workspaceTransaction;
@property (readonly, weak, nonatomic) SBWorkspaceApplicationSceneTransitionContext *applicationTransitionContext;
@property (readonly, nonatomic) SBLayoutState *fromLayoutState;
@property (readonly, nonatomic) SBLayoutState *toLayoutState;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
@property (readonly, nonatomic) BOOL animationsDisabled;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWorkspaceTransaction:(id)a0;
- (void)transitionCompletedWithError:(id)a0;

@end
