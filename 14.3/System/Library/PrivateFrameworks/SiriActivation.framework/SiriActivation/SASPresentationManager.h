@class NSMutableDictionary;
@protocol SASPresentationManagerDelegate;

@interface SASPresentationManager : NSObject {
    BOOL _lastReportedShouldRejectNewActivations;
    id<SASPresentationManagerDelegate> _presentationManagerDelegate;
}

@property (retain, nonatomic) NSMutableDictionary *presentations;

+ (BOOL)_canTransitionFromState:(long long)a0 toState:(long long)a1;
+ (BOOL)_canTransitionFromState:(long long)a0 toState:(long long)a1 presentationIdentifier:(long long)a2;
+ (BOOL)_canTransitionToOffFromState:(long long)a0;
+ (BOOL)_canTransitionToHeatedFromState:(long long)a0;
+ (BOOL)_canTransitionToStoppingFromState:(long long)a0;
+ (BOOL)_canTransitionToStartingFromState:(long long)a0;
+ (BOOL)_canTransitionToActiveFromState:(long long)a0 presentationIdentifier:(long long)a1;
+ (BOOL)_shouldKeepPingingForRequestState:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (long long)requestState;
- (void)registerSiriPresentation:(id)a0 withIdentifier:(long long)a1;
- (void)pongWithPresentationIdentifier:(long long)a0;
- (void)setPresentationManagerDelegate:(id)a0;
- (void)unregisterSiriPresentationWithIdentifier:(long long)a0;
- (void)presentationWithPresentationIdentifierBecameActive:(long long)a0;
- (void)presentationWithPresentationIdentifierBeganStopping:(long long)a0;
- (void)presentationWithPresentationIdentifierBecameOff:(long long)a0;
- (BOOL)activePresentationsAreIdleAndQuiet;
- (void)cancelAllPreheatedPresentations;
- (void)sendButtonEventCompletionToPresentations:(id /* block */)a0;
- (long long)nextPresentationToActivate;
- (void)activePresentations_handleRequestWithOptions:(id)a0;
- (void)presentationWithPresentationIdentifierBeganStarting:(long long)a0;
- (void)presentationRequestedWithPresentationIdentifier:(long long)a0 presentationOptions:(id)a1 requestOptions:(id)a2;
- (void)presentationWithPresentationIdentifier:(long long)a0 pocketStateFetchDeterminedShouldCancelWake:(BOOL)a1;
- (void)presentationWithPresentationIdentifierWakeScreenAfterActivation:(long long)a0;
- (void)activeAndStoppingPresentations_presentationDismissalRequestedWithOptions:(id)a0;
- (void)activePresentations_cancelTTS;
- (void)preheatNextPresentationToActivate;
- (void)startingPresentations_cancelPendingActivationWithReason:(unsigned long long)a0;
- (void)activePresentations_deviceWonMyriadElection;
- (void)activeSpringBoardPresentation_updateActiveInterfaceOrientation:(long long)a0 willAnimateWithDuration:(double)a1;
- (void)activeAndStartingPresentations_updateCurrentLockState:(unsigned long long)a0;
- (void)activePresentations_bulletinManagerDidChangeBulletins;
- (void)_presentationsLock_cancelAllPreheatedPresentations;
- (void)_notifyDelegateOfShouldRejectNewActivationsChangeIfNecessary;
- (long long)_presentationsLock_nextPresentationToActivate;
- (BOOL)_shouldRejectNewActivations;
- (void)_sendBlockToActivePresentations:(id /* block */)a0;
- (void)_sendBlockToStartingPresentations:(id /* block */)a0;
- (void)_sendBlockToStoppingPresentations:(id /* block */)a0;
- (void)_transitionPresentationWithPresentationIdentifier:(long long)a0 toState:(long long)a1;
- (void)_setupPingTimerForPresentationIdentifier:(long long)a0;
- (void)_teardownPingTimerForPresentationIdentifier:(long long)a0;
- (void)_sendBlock:(id /* block */)a0 toPresentationWithPresentationIdentifier:(long long)a1;
- (void)_waitForPongFromPresentationWithPresentationIdentifier:(long long)a0;
- (void)_forceAllPresentationsOff;

@end
