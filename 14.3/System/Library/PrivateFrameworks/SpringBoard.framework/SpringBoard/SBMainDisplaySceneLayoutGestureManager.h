@class NSString, SBAppResizeGestureWorkspaceTransaction, SBMainDisplaySceneLayoutViewController, SBPanSystemGestureRecognizer;

@interface SBMainDisplaySceneLayoutGestureManager : NSObject <BSTransactionObserver, SBPanSystemGestureRecognizerDelegate> {
    SBPanSystemGestureRecognizer *_resizePanSystemGestureRecognizer;
    SBAppResizeGestureWorkspaceTransaction *_resizePanSystemGestureRecognizerWorkspaceTransaction;
}

@property (readonly, weak, nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)transactionDidComplete:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSceneLayoutViewController:(id)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)_handleResizePanSystemGestureRecognizer:(id)a0;
- (BOOL)_hasActiveModalFloatingApplication;
- (BOOL)_allowSystemGestureRecognizer:(id)a0 withSystemGestureType:(unsigned long long)a1 toReceiveTouchAtLocation:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)canBeginAppResizeGestureRecognizerAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_createResizePanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)a0;
- (BOOL)_hasActiveSystemGestureRecognizerWorkspaceTransaction;

@end
