@class FBSDisplayIdentity, SBWorkspaceTransitionRequest, SBSceneManager, SBLayoutStateTransitionCoordinator, FBSDisplayConfiguration, SBSceneLayoutViewController, SBUIAnimationController;

@interface SBWorkspaceTransaction : SBTransaction {
    SBWorkspaceTransitionRequest *_transitionRequestForPendingInterruption;
}

@property (readonly, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (readonly, nonatomic) SBSceneManager *sceneManager;
@property (nonatomic) BOOL clearsCompletionAsynchronously;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest;
@property (readonly, nonatomic) SBSceneLayoutViewController *layoutController;
@property (retain, nonatomic) SBUIAnimationController *suggestedAnimationController;

- (id)initWithTransitionRequest:(id)a0;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isInterruptingForTransitionRequest;
- (void)interruptForTransitionRequest:(id)a0;
- (void)_willInterruptForTransitionRequest:(id)a0;
- (id)_transitionRequestForInterruption;
- (void)_didInterruptForTransitionRequest:(id)a0;
- (void)_performDeviceCoherencyCheck;
- (id)_childWorkspaceTransactions;
- (void)keepAliveForAsyncBlock:(id /* block */)a0;

@end
