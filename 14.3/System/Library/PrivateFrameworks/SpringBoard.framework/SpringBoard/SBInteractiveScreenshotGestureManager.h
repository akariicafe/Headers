@class NSMutableDictionary, SBInteractiveScreenshotCommitWorkspaceTransaction, SBSystemGestureManager, SBMainWorkspace, UIScreen, SBInteractiveScreenshotSettings, FBScene, NSMutableArray, NSString, SBAsynchronousRenderingAssertion, SBInteractiveScreenshotScreenEdgePanGestureRecognizer, NSMutableSet, BSMonotonicReferenceTime, NSHashTable, SBMainDisplayWorkspaceAppInteractionEventSource, NSUUID;
@protocol SBInteractiveScreenshotGestureManagerDelegate, BSInvalidatable;

@interface SBInteractiveScreenshotGestureManager : NSObject <BSTransactionObserver, SBInteractiveScreenshotCommitWorkspaceTransactionDelegate, SBInteractiveScreenshotGestureRootViewControllerDelegate, SBMainDisplayWorkspaceAppInteractionEventSourceObserving, SBSystemGestureRecognizerDelegate> {
    NSUUID *_activeGestureSessionID;
    SBMainDisplayWorkspaceAppInteractionEventSource *_appInteractionEventSource;
    SBAsynchronousRenderingAssertion *_asynchronousRenderingAssertion;
    SBInteractiveScreenshotScreenEdgePanGestureRecognizer *_bottomLeftGestureRecognizer;
    SBInteractiveScreenshotScreenEdgePanGestureRecognizer *_bottomRightGestureRecognizer;
    SBInteractiveScreenshotCommitWorkspaceTransaction *_commitTransaction;
    id<BSInvalidatable> _commitTransactionDisableGestureAssertion;
    NSMutableSet *_disableGestureAssertions;
    BOOL _hasInitiatedCommit;
    BOOL _isCapturingScreenshot;
    BSMonotonicReferenceTime *_lastApplicationTouchReferenceTime;
    NSMutableArray *_pendingCommitWorkspaceTransactionBlocks;
    UIScreen *_screen;
    NSMutableDictionary *_sessionIDToSession;
    SBInteractiveScreenshotSettings *_settings;
    FBScene *_sourceScene;
    SBSystemGestureManager *_systemGestureManager;
    NSHashTable *_weakReusableGestureRootWindows;
    SBMainWorkspace *_workspace;
}

@property (weak, nonatomic) id<SBInteractiveScreenshotGestureManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)transactionDidComplete:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)eventSource:(id)a0 userTouchedApplication:(id)a1;
- (void)_invalidateSessionID:(id)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (id)initWithScreen:(id)a0 sourceScene:(id)a1 workspace:(id)a2 systemGestureManager:(id)a3 appInteractionEventSource:(id)a4;
- (BOOL)handleRemoteTransientOverlayPresentationRequest:(id)a0 forSession:(id)a1;
- (id)acquireDisableGestureAssertionWithReason:(id)a0;
- (void)interactiveScreenshotGestureRootViewController:(id)a0 gestureDidCompleteWithIntent:(long long)a1;
- (void)interactiveScreenshotGestureRootViewControllerRequestsGestureRecognizerCancellation:(id)a0;
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsGestureWindowInvalidation:(id)a0;
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsPlaceholderChromeRemoval:(id)a0;
- (void)_handleInteractiveScreenshotGesture:(id)a0;
- (void)_performPendingCommitWorkspaceTransactionBlocksWithTransaction:(id)a0;
- (id)_screenshotPresentationOptions;
- (void)_performCommitWorkspaceTransactionBlock:(id /* block */)a0;

@end
