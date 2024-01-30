@class FBSDisplayIdentity, SBWorkspaceTransitionRequest, SBSceneManager, SBLayoutStateTransitionCoordinator, FBSDisplayConfiguration, SBWindowScene, SBUIAnimationController;

@interface SBWorkspaceTransaction : SBTransaction {
    SBWorkspaceTransitionRequest *_transitionRequestForPendingInterruption;
}

@property (readonly, nonatomic) SBWindowScene *windowScene;
@property (readonly, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (readonly, nonatomic) SBSceneManager *sceneManager;
@property (nonatomic) BOOL clearsCompletionAsynchronously;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest;
@property (retain, nonatomic) SBUIAnimationController *suggestedAnimationController;

- (id)initWithTransitionRequest:(id)a0;
- (id)_customizedDescriptionProperties;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_didComplete;
- (id)init;
- (void).cxx_destruct;
- (id)_childWorkspaceTransactions;
- (void)_didInterruptForTransitionRequest:(id)a0;
- (BOOL)_isInterruptingForTransitionRequest;
- (void)_performDeviceCoherencyCheck;
- (id)_transitionRequestForInterruption;
- (void)_willInterruptForTransitionRequest:(id)a0;
- (void)interruptForTransitionRequest:(id)a0;
- (BOOL)isMainDisplayTransaction;
- (void)keepAliveForAsyncBlock:(id /* block */)a0;

@end
