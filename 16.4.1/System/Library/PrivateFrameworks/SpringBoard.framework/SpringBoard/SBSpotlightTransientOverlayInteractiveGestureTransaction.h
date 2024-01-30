@class SBSpotlightTransientOverlayViewController, SBMainWorkspaceTransaction, SBSpotlightSettings, NSString;

@interface SBSpotlightTransientOverlayInteractiveGestureTransaction : SBMainWorkspaceTransaction <BSTransactionObserver> {
    BOOL _gestureFinishedBeforeTransactionBegan;
}

@property (retain, nonatomic) SBSpotlightSettings *settings;
@property (retain, nonatomic) SBSpotlightTransientOverlayViewController *spotlightTransientOverlayViewController;
@property (retain, nonatomic) SBMainWorkspaceTransaction *presentTransientOverlayTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_begin;
- (void)_logForInterruptAttemptReason:(id)a0;
- (void)transactionDidComplete:(id)a0;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_didComplete;
- (void).cxx_destruct;
- (void)endPresentation:(BOOL)a0;
- (void)updatePresentationWithProgress:(double)a0 translation:(double)a1;
- (void)_dismissSpotlightTransientOverlayViewController;
- (void)_presentTransientOverlayViewController:(id)a0;
- (id)initWithTransitionRequest:(id)a0 spotlightTransientOverlayViewController:(id)a1;
- (void)noteGestureFinishedBeforeTransactionBegan;

@end
